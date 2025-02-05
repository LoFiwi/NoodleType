#ifndef MENUBUTTONS_H
#define MENUBUTTONS_H

#include "imgui.h"

class MenuButtons {
private:
    bool m_showSettings;
    bool m_showStart;
    const ImVec2 m_buttonSize;

public:
    MenuButtons() : m_showStart(false), m_showSettings(false),  m_buttonSize(200, 50) {}
    
    void renderButtons();
    // bool isShowSettings() { return m_showSettings; }
    // bool isShowStart() { return m_showStart; }
};

#endif