#ifndef MENUBUTTONS_H
#define MENUBUTTONS_H

#include "imgui.h"
#include "../Image_load.h"

class MenuButtons {
private:
    ImageLoad startButtonTexture, recordsButtonTexture, settingsButtonTexture, exitButtonTexture;
    bool m_showSettings = false;
    bool m_showStart = false;
    const ImVec2 m_buttonSize = ImVec2(450,70);
    const ImVec4 m_buttonColor = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);

public:
    MenuButtons() : startButtonTexture("assets/textures/start.png"), recordsButtonTexture("assets/textures/records.png"),
                    settingsButtonTexture("assets/textures/settings.png"),exitButtonTexture("assets/textures/exit.png"){}
    
    void renderButtons();
};

#endif