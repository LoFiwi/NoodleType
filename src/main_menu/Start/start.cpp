#include "imgui.h"
#include <GLFW/glfw3.h>

void RenderFrame(bool &showStart) {
    ImGuiIO& io = ImGui::GetIO();
    
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(io.DisplaySize);
    
    ImGui::Begin("Start Page", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);
    
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize("NoodleType").x) / 2);
    ImGui::Text("NoodleType");
    
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 50);
    

    
    static char inputBuffer[256] = "";
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 400) / 2);
    ImGui::InputTextMultiline("##input", inputBuffer, IM_ARRAYSIZE(inputBuffer), 
                             ImVec2(400, 100), ImGuiInputTextFlags_AllowTabInput);
    
    ImGui::Spacing();
    ImGui::Spacing();
    
    //Back to menu
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
    if (ImGui::Button("Back to Menu", ImVec2(200, 50))) {
        showStart = false;
    }
    
    ImGui::End();
}