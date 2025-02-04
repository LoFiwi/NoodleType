#include "buttons.h"

void renderButtons(bool& showStart, bool& showSettings) {
    ImVec2 windowSize = ImGui::GetWindowSize();
    float buttonWidth = 200;
    float buttonHeight = 50;
    float spacing = 10;  // Indentation between buttons

    // Vertical centering
    float totalHeight = (buttonHeight * 2) + spacing;
    float startY = (windowSize.y - totalHeight) / 2;

    ImGui::SetCursorPosY(startY);

    // "Start"
    ImGui::SetCursorPosX((windowSize.x - buttonWidth) / 2);
    if (ImGui::Button("Start", ImVec2(buttonWidth, buttonHeight))) {
        showStart = !showStart;
    }

    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + spacing);

    // "Settings"
    ImGui::SetCursorPosX((windowSize.x - buttonWidth) / 2);
    if (ImGui::Button("Settings", ImVec2(buttonWidth, buttonHeight))) {
        showSettings = !showSettings;
    }
}
