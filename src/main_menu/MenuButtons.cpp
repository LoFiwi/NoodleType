#include "MenuButtons.h"

#include "Start/start.cpp"
#include "settings/settings.cpp"

#include <cstdio>

#include <GLFW/glfw3.h>

void MenuButtons::renderButtons() {
    float centerX = (ImGui::GetWindowSize().x - m_buttonSize.x) / 2;
    
    // Start Button
    ImGui::SetCursorPosX(centerX);
    if (ImGui::Button("Start", m_buttonSize)) {
        m_showStart = !m_showStart;
    }
    
    // My Records Button
    ImGui::SetCursorPosX(centerX);
    if (ImGui::Button("My Records", m_buttonSize)) {
        printf("My Records button clicked!\n");
    }
    
    // Settings Button
    ImGui::SetCursorPosX(centerX);
    if (ImGui::Button("Settings", m_buttonSize)) {
        m_showSettings = !m_showSettings;
    }
    
    // Exit Button
    ImGui::SetCursorPosX(centerX);
    if (ImGui::Button("Exit", m_buttonSize)) {
        glfwSetWindowShouldClose(glfwGetCurrentContext(), GLFW_TRUE);
    }

    if(m_showStart){
        startRender(m_showStart);
    }

    if(m_showSettings){
        settingsRender(m_showSettings);
    }
}