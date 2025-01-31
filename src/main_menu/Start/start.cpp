#include "imgui.h"
#include <GLFW/glfw3.h>
#include <chrono>

void RenderFrame(bool& showStart) {
    ImGuiIO& io = ImGui::GetIO();

    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(io.DisplaySize);

    ImGui::Begin("Start Page", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);

    // Таймер
    static auto startTime = std::chrono::steady_clock::now();
    auto currentTime = std::chrono::steady_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::seconds>(currentTime - startTime).count();

    // отображение таймера
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize("Time: 00:00").x) / 2);
    ImGui::Text("Time: %02d:%02d", elapsedTime / 60, elapsedTime % 60);

    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 50);

    // Поле ввода текста
    static char inputBuffer[256] = "";
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 400) / 2);
    ImGui::InputTextMultiline("##input", inputBuffer, IM_ARRAYSIZE(inputBuffer),
        ImVec2(400, 100), ImGuiInputTextFlags_AllowTabInput);

    ImGui::Spacing();
    ImGui::Spacing();

    // Кнопка "Back to Menu"
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
    if (ImGui::Button("Back to Menu", ImVec2(200, 50))) {
        showStart = false; // Закрити стартову сторінку
        memset(inputBuffer, 0, sizeof(inputBuffer)); // Очистити поле вводу
        startTime = std::chrono::steady_clock::now(); // Скинути таймер
    }

    ImGui::End();
}