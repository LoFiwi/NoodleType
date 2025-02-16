#include "MenuButtons.h"

#include "Start/Start.cpp"
#include "settings/settings.cpp"

#include "Start/Start.h"

#include "stb_image.h"

#include <cstdio>

#include <GLFW/glfw3.h>

Start renderStart;
void MenuButtons::renderButtons() {

    float centerX = (ImGui::GetWindowSize().x - m_buttonSize.x) / 2;
    float centerY = (ImGui::GetWindowSize().y - m_buttonSize.y) / 2;

    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.5f, 0.5f, 0.5f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(1, 1));

    // Start Button
    ImGui::SetCursorPosX(centerX);
    ImTextureID startTexId = static_cast<ImTextureID>(static_cast<intptr_t>(m_startButtonTexture.GetTextureID()));
    if (ImGui::ImageButton("StartBtn", startTexId, m_buttonSize, ImVec2(0, 0), ImVec2(1, 1), m_buttonColor)) {
        m_showStart = !m_showStart;
    }
    
    ImGui::Spacing();
    ImGui::Spacing();

    // My Records Button
    ImGui::SetCursorPosX(centerX);
    ImTextureID recordsTexId = static_cast<ImTextureID>(static_cast<intptr_t>(m_recordsButtonTexture.GetTextureID()));
    if (ImGui::ImageButton("MyRecordsBtn", recordsTexId, m_buttonSize, ImVec2(0, 0), ImVec2(1, 1), m_buttonColor)) {
        printf("My Records");
    }
    
    // Settings Button
    ImGui::SetCursorPosX(centerX);
    ImTextureID settingsTexId = static_cast<ImTextureID>(static_cast<intptr_t>(m_settingsButtonTexture.GetTextureID()));
    if (ImGui::ImageButton("SettingsBtn", settingsTexId, m_buttonSize, ImVec2(0,0),ImVec2(1,1), m_buttonColor)) {
        m_showSettings = !m_showSettings;
    }
    
    // Exit Button
    ImGui::SetCursorPosX(centerX);
    ImTextureID exitTexId = static_cast<ImTextureID>(static_cast<intptr_t>(m_exitButtonTexture.GetTextureID()));
    if (ImGui::ImageButton("ExitBtn", exitTexId, m_buttonSize, ImVec2(0,0),ImVec2(1,1),m_buttonColor)) {
        glfwSetWindowShouldClose(glfwGetCurrentContext(), GLFW_TRUE);
    }

    if(m_showStart){
        renderStart.renderStartWindow(m_showStart);
    }

    if(m_showSettings){
        settingsRender(m_showSettings);
    }

    ImGui::PopStyleVar(2);
    ImGui::PopStyleColor(4);
    
}