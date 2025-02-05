#include "imgui.h"
#include <GLFW/glfw3.h>
#include "save_pressets.cpp"


void settingsRender(bool& showSettings) {

    ImGuiIO& io = ImGui::GetIO();

    // Робимо вікно повноекранним
    ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Always);
    ImGui::SetNextWindowSize(io.DisplaySize, ImGuiCond_Always);

    // Відкриваємо повноекранне вікно без заголовку та рамок
    ImGui::Begin("Settings", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);

    // Відступ перед кнопкою
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 50);

    // Вирівнюємо кнопку по центру
    float buttonWidth = 200;
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - buttonWidth) / 2);
    
    if (ImGui::Button("Back to Menu", ImVec2(buttonWidth, 50))) {
        showSettings = false;
    }

    ImGui::End();
}