#include <GLFW/glfw3.h>

#include <iostream>

#include "../../API/TypingSpeedAPI.h"

#include "Start.h"

static TypingSpeedAPI api;

void Start::renderStartWindow(bool &showStart){

    if(!m_restartWSButtonTexture || m_exitBtnTexture){
        initializeTextures();
    }

    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.5f, 0.5f, 0.5f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(1, 1));


    
    static bool testStarted = false;
    static bool testFinished = false;
    static TypingSpeedAPI::TestResults finalResults = {0.0, 0.0, 0.0};

    ImGuiIO& io = ImGui::GetIO();
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(io.DisplaySize);
    ImGui::Begin("Start Page", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);

    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f,1.0f,1.0f,1.0f));
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize("Press Enter to stop test.").x) / 2);
    ImGui::Text("Press Enter to stop test.");

    // Display text for typing
    
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 20);
    ImGui::SetCursorPosX(ImGui::GetStyle().WindowPadding.x); // Відступ зліва
    ImGui::PushTextWrapPos(ImGui::GetWindowContentRegionMax().x);
    ImGui::TextWrapped("%s", api.getCurrentText().c_str());
    ImGui::PopTextWrapPos();
    ImGui::PopStyleColor();

    // Input field
    static char inputBuffer[256] = "";
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 50);
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 400) / 2);

    ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.2f, 0.2f, 0.2f, 1.0f));    // Input field color.
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f));   // Input text color.
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
    ImGui::PopStyleColor();
    ImGui::PopStyleColor();
    // Show results
    if (testFinished) {
        // show final results
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
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 410) / 2);
    ImTextureID restartWSButtonTexId = static_cast<ImTextureID>(static_cast<intptr_t>(m_restartWSButtonTexture->GetTextureID()));
    if (ImGui::ImageButton("RestartBtn", restartWSButtonTexId, m_buttonSize, ImVec2(0,0),ImVec2(1,1),m_buttonColor)) {
        memset(inputBuffer, 0, sizeof(inputBuffer));
        testStarted = false;
        testFinished = false;
        api.reset();
    }   

    // "Exit"

    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 20);
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 410) / 2);
    ImTextureID exitBtnTextureId = static_cast<ImTextureID>(static_cast<intptr_t>(m_exitBtnTexture->GetTextureID()));

    if (ImGui::ImageButton("ExitBtn",exitBtnTextureId, m_buttonSize, ImVec2(0,0),ImVec2(1,1))){
        showStart = false;
        memset(inputBuffer, 0, sizeof(inputBuffer));
        testStarted = false;
        api.reset();
    }

    ImGui::PopStyleVar(2);
    ImGui::PopStyleColor(4);
    ImGui::End();
}