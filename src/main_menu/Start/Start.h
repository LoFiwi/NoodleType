#ifndef START_H
#define START_H

#include "imgui.h"
#include "../../Image_load.h"

class Start{
private:
    ImageLoad m_restartWSButtonTexture,m_exitBtnTexture;
        
    const ImVec2 m_buttonSize = ImVec2(410,40);
    const ImVec4 m_buttonColor = ImVec4(1.0f,1.0f,1.0f,1.0f);

public:
    Start():m_restartWSButtonTexture("assets/textures/restartWS.png"), m_exitBtnTexture("assets/textures/exit.png"){}

    void renderStartWindow(bool &showStart);
};

#endif