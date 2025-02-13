#include "imgui.h"
#include <GLFW/glfw3.h>
#include "save_pressets.cpp"

#include "../../Image_load.h"


void settingsRender(bool& showSettings) {

    ImGuiIO& io = ImGui::GetIO();

    ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Always);
    ImGui::SetNextWindowSize(io.DisplaySize, ImGuiCond_Always);

    ImGui::Begin("Settings", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);

    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 50);

    float buttonWidth = 200;
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - buttonWidth) / 2);
    
    if (ImGui::Button("Back to Menu", ImVec2(buttonWidth, 50))) {
        showSettings = false;
    }

    ImGui::End();
}