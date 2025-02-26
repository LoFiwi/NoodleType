#ifndef PRESTART_H
#define PRESTART_H
#include "imgui.h"
#include "../../ImageLoad.h"

class PreStart {
private:
    ImageLoad* m_arrowIconTexture;
    ImageLoad* m_timerIconTexture;
    ImageLoad* m_languageIconTexture;
    ImageLoad* m_newRunButton;
    ImageLoad* m_competitorIconTexture;

    int selectedLanguage = 0;
    float timerValue = 30.0f;
    bool m_showStart = false;
    
    const ImVec2 m_buttonSize = ImVec2(50, 50);

public:
    PreStart():m_arrowIconTexture(nullptr),m_timerIconTexture(nullptr),
                m_languageIconTexture(nullptr),m_newRunButton(nullptr){}
    ~PreStart(){
        delete m_arrowIconTexture;
        delete m_timerIconTexture;
        delete m_languageIconTexture;
        delete m_newRunButton;
        delete m_competitorIconTexture;
    };

    void initializeTexture(){
        if(!m_arrowIconTexture){
            m_arrowIconTexture = new ImageLoad("assets/images/arrow.png");
        }
        if(!m_timerIconTexture){
            m_timerIconTexture = new ImageLoad("assets/textures/Timer_set.png");
        }
        if(!m_languageIconTexture){
            m_languageIconTexture = new ImageLoad("assets/textures/language_choose.png");
        }
        if(!m_newRunButton){
            m_newRunButton = new ImageLoad("assets/textures/new_run.png");
        }
        if(!m_competitorIconTexture){
            m_competitorIconTexture = new ImageLoad("assets/textures/competitor.png");
        }
    }

    void renderPreStartWindow(bool &show);
    void renderNewRun();
};

#endif