#ifndef START_H
#define START_H

#include "imgui.h"
#include "../../ImageLoad.h"

class Start{
private:
    ImageLoad* m_restartWSButtonTexture;
    ImageLoad* m_exitBtnTexture;   
    const ImVec2 m_buttonSize = ImVec2(410,40);
    const ImVec4 m_buttonColor = ImVec4(0.0f,0.0f,0.0f,0.0f);

public:
    Start():m_restartWSButtonTexture(nullptr), m_exitBtnTexture(nullptr){}
    ~Start(){
        delete m_restartWSButtonTexture;
        delete m_exitBtnTexture;
    }

    void initializeTextures(){
        if(!m_restartWSButtonTexture){
            m_restartWSButtonTexture = new ImageLoad("assets/textures/restartWS.png");
        }
        if(!m_exitBtnTexture){
            m_exitBtnTexture = new ImageLoad("assets/textures/exitSmaller.png");
        }
    }

    void renderStartWindow(bool &showStart);
};

#endif