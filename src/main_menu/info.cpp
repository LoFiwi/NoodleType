#include <imgui.h>

void RenderInfoIcon() {
    // Get window size
    ImVec2 window_pos = ImGui::GetWindowPos();
    ImVec2 window_size = ImGui::GetWindowSize();
    
    // Pos of icon
    ImVec2 icon_pos = ImVec2(window_pos.x + window_size.x - 20, window_pos.y + window_size.y - 30);

    // Position
    ImGui::SetCursorPos(ImVec2(icon_pos.x - window_pos.x, icon_pos.y - window_pos.y));

    // Draw info icon
    ImGui::Text("i");

    // When hover the cursor over the icon
    if (ImGui::IsItemHovered()) {
        ImGui::BeginTooltip();
        ImGui::Text("Project made by students of");
        ImGui::Text("State University of Information and Communication Technologies");
        ImGui::Separator();
        ImGui::Text("Developers:");
        ImGui::Separator();
        ImGui::Text("- Roman Atiashov - main c++ Developer");
        ImGui::Text("- Pyatachuk Pavlo - c++ Developer");
        ImGui::Text("- Artemchuk Kateryna - main app GUI-Designer");
        ImGui::Text("- Goncharova Anastasiya - GUI-Designer");
        ImGui::Text("- Bilous Nazar - Manual Tester");
        ImGui::EndTooltip();
    }
}
