#include "PreStart.h"
#include "Start.h"
#include "../../ImageLoad.h"
#include "../../API/TypingSpeedAPI.h"

extern Start renderStart;

void PreStart::renderPreStartWindow(bool &show){
    if (!m_arrowIconTexture||!m_timerIconTexture  ||!m_languageIconTexture || !m_newRunButton  ||!m_competitorIconTexture) {
        initializeTexture();
    }

    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.5f, 0.5f, 0.5f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(1, 1));

    ImGuiIO& io = ImGui::GetIO();
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(io.DisplaySize);
    ImGui::Begin("PreStart Page", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);

    float centerX = io.DisplaySize.x * 0.5f;

    // Arrow
    ImGui::SetCursorPos(ImVec2(10, 10));
    ImTextureID arrowIconId = static_cast<ImTextureID>(static_cast<intptr_t>(m_arrowIconTexture->GetTextureID())); 
    if (ImGui::ImageButton("Back", arrowIconId, m_buttonSize, ImVec2(0,0), ImVec2(1,1))) {
        show = !show;
    }

    static bool showLanguageOptions = false;
    ImTextureID languageIconId = static_cast<ImTextureID>(static_cast<intptr_t>(m_languageIconTexture->GetTextureID()));

    float languageButtonWidth = 500.0f;
    float languageButtonHeight = 40.0f;
    float languageButtonX = centerX - languageButtonWidth * 0.5f;
    float languageButtonY = 80.0f;

    // Language choose
    ImGui::SetCursorPos(ImVec2(languageButtonX, languageButtonY));
    if (ImGui::ImageButton("Language", languageIconId, ImVec2(languageButtonWidth, languageButtonHeight))) {
        showLanguageOptions = !showLanguageOptions;
    }

    if (showLanguageOptions) {
        // Стиль серого цвета
        ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.2f, 0.2f, 0.2f, 1.0f));
        ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.8f, 0.8f, 0.8f, 1.0f));
        ImGui::PushStyleColor(ImGuiCol_PopupBg, ImVec4(0.15f, 0.15f, 0.15f, 1.0f));
        ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.1f, 0.1f, 0.1f, 1.0f));

        // Размер списка = размеру кнопки
        float languageListWidth = languageButtonWidth;
        float languageListX = centerX - languageListWidth * 0.5f;
        float languageListY = languageButtonY + languageButtonHeight + 5.0f; // Чуть ниже кнопки

        ImGui::SetCursorPos(ImVec2(languageListX, languageListY));
        static int selectedLanguage = 0;
        const char* languages[] = { "English", "Ukrainian" };

        ImGui::PushItemWidth(languageListWidth);  // Делаем список таким же широким
        ImGui::Combo("##Language", &selectedLanguage, languages, IM_ARRAYSIZE(languages));
        ImGui::PopItemWidth();

        ImGui::PopStyleColor(4);
    } 

    // Timer set
    ImTextureID timerTextureId = static_cast<ImTextureID>(static_cast<intptr_t>(m_timerIconTexture->GetTextureID()));
    float timerPanelX = centerX - 250;
    float timerPanelY = 150.0f;
    
    ImGui::SetCursorPos(ImVec2(timerPanelX, timerPanelY));
    ImGui::Image(timerTextureId, ImVec2(200, 100));
    
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f));
    static float timerValue = 30.0f;
    ImGui::SetCursorPos(ImVec2(timerPanelX + 15, timerPanelY + 50));
    
    ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.2f, 0.2f, 0.2f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_SliderGrab, ImVec4(0.4f, 0.4f, 0.4f, 1.0f));
    
    ImGui::PushItemWidth(170);
    ImGui::SliderFloat("##Timer", &timerValue, 10.0f, 120.0f, "%.0f s");
    ImGui::PopItemWidth();
    
    ImGui::PopStyleColor(3);
    


    //Competitor
    ImTextureID competitorTextureId = static_cast<ImTextureID>(static_cast<intptr_t>(m_competitorIconTexture->GetTextureID()));
    float competitorPanelWidth = 200.0f;
    float competitorPanelHeight = 100.0f;
    float competitorPanelX = centerX + 50;
    float competitorPanelY = 150.0f;

    ImGui::SetCursorPos(ImVec2(competitorPanelX, competitorPanelY));
    ImGui::Image(competitorTextureId, ImVec2(competitorPanelWidth, competitorPanelHeight));

    static char competitorName[64] = "";
    ImGui::SetCursorPos(ImVec2(competitorPanelX + 15, competitorPanelY + 50));
    ImGui::PushItemWidth(competitorPanelWidth - 30);

    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.2f, 0.2f, 0.2f, 1.0f));

    ImGui::InputText("##Competitor", competitorName, IM_ARRAYSIZE(competitorName));

    ImGui::PopStyleColor(2);
    ImGui::PopItemWidth();

    // New Run
    float newRunButtonWidth = 500.0f;
    float newRunButtonHeight = 50.0f;
    float newRunButtonX = (ImGui::GetWindowSize().x - newRunButtonWidth) * 0.5f;
    float newRunButtonY = ImGui::GetWindowSize().y - newRunButtonHeight - 40.0f;

    ImGui::SetCursorPos(ImVec2(newRunButtonX, newRunButtonY));
    ImTextureID newRunTexId = static_cast<ImTextureID>(static_cast<intptr_t>(m_newRunButton->GetTextureID()));

    if (ImGui::ImageButton("NewRunBtn", newRunTexId, ImVec2(newRunButtonWidth, newRunButtonHeight))){
        m_showStart = !m_showStart;
        renderNewRun();
    }

    ImGui::PopStyleVar(2);
    ImGui::PopStyleColor(4);
    ImGui::End();

    renderNewRun();
}

void PreStart::renderNewRun(){
    if(m_showStart){
        renderStart.renderStartWindow(m_showStart);
    }
}
