#ifndef MENUBUTTONS_H
#define MENUBUTTONS_H

#include "imgui.h"
#include "../ImageLoad.h"

class MenuButtons {
private:
    ImageLoad m_startButtonTexture, m_recordsButtonTexture, m_exitButtonTexture;
    bool m_showSettings = false;
    bool m_showStart = false;
    const ImVec2 m_buttonSize = ImVec2(450,70);
    const ImVec4 m_buttonColor = ImVec4(1.0f,1.0f,1.0f,1.0f);

public:
    MenuButtons() : m_startButtonTexture("assets/textures/start.png"), m_recordsButtonTexture("assets/textures/records.png"),
                    m_exitButtonTexture("assets/textures/exit.png"){}
    
    void renderButtons();
    void renderInsideButtons();
};

#endif