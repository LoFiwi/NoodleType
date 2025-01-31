#include "imgui.h"
#include <GLFW/glfw3.h>
#include "save_pressets.cpp"


void settingsRender(bool& showSettings, float backgroundColor[3]) {
    if (!showSettings) return;

    ImGui::Begin("Settings", &showSettings, ImGuiWindowFlags_AlwaysAutoResize);
    ImGui::Text("Background Color");
    if (ImGui::ColorEdit3("Choose Color", backgroundColor)) {
        printf("Color changed to: %f, %f, %f\n", backgroundColor[0], backgroundColor[1], backgroundColor[2]);
        SaveBackgroundColor(backgroundColor);
    }
    ImGui::End();
}