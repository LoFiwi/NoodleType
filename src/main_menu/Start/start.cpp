#include "imgui.h"
#include <GLFW/glfw3.h>

#include "../../API/TypingSpeedAPI.h"

void startRender(bool& showStart) {

    static TypingSpeedAPI api;
    static bool testStarted = false;
    static bool testFinished = false;
    static TypingSpeedAPI::TestResults finalResults = {0.0, 0.0, 0.0};

    ImGuiIO& io = ImGui::GetIO();
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(io.DisplaySize);
    ImGui::Begin("Start Page", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);

    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize("Press Enter to stop test.").x) / 2);
    ImGui::Text("Press Enter to stop test.");

    // Display text for typing
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 20);
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize(api.getCurrentText().c_str()).x) / 2);
    ImGui::TextWrapped("%s", api.getCurrentText().c_str());

    // Input field
    static char inputBuffer[256] = "";
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 50);
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 400) / 2);
    
    if (!testFinished) {
        bool enter_pressed = ImGui::InputTextMultiline("##input", inputBuffer, IM_ARRAYSIZE(inputBuffer),
            ImVec2(400, 100), ImGuiInputTextFlags_AllowTabInput);
            
        if (!testStarted && strlen(inputBuffer) > 0) {
            api.startTest();
            testStarted = true;
        }
            
        // checking whether the enter button was pressed
        if (ImGui::IsKeyPressed(ImGuiKey_Enter) && testStarted) {
            testFinished = true;
            finalResults = api.calculateResults(inputBuffer);
            api.reset();
        }
    } else{
        // Show the entered text without the ability to edit
        ImGui::InputTextMultiline("##input", inputBuffer, IM_ARRAYSIZE(inputBuffer),
            ImVec2(400, 100), ImGuiInputTextFlags_ReadOnly);
    }

    // Show results
    if (testFinished) {
            // Показуємо фінальні результати
            ImGui::Text("Final Results:");
            ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
            ImGui::Text("WPM: %.1f", finalResults.wpm);
            ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
            ImGui::Text("Accuracy: %.1f%%", finalResults.accuracy);
            ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
            ImGui::Text("Time: %.1f seconds", finalResults.elapsedTime);
    }

    // Buttons at the bottom
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 20);

    // Container for indented buttons
    float windowWidth = ImGui::GetWindowSize().x;
    float totalButtonsWidth = 420;  // 200 * 2 + 20 (width of two buttons + indentation between them)
    ImGui::SetCursorPosX((windowWidth - totalButtonsWidth) / 2);

    // "Restart"
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 20);
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
    if (ImGui::Button("Restart", ImVec2(200, 50))) {
        memset(inputBuffer, 0, sizeof(inputBuffer));
        testStarted = false;
        testFinished = false;
        api.reset();
    }

    // "Back to Menu"
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 20);
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
    if (ImGui::Button("Back to Menu", ImVec2(200, 50))) {
        showStart = false;
        memset(inputBuffer, 0, sizeof(inputBuffer));
        testStarted = false;
        api.reset();
    }

    ImGui::End();
}