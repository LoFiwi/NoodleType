#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

#include <GLFW/glfw3.h>

#include <cstdio>

#include "main_menu/settings/settings.cpp"
#include "main_menu/Start/start.cpp"

#include "stb_image.h"

#include "Image_load.h"

int main() {
    if (!glfwInit()) return -1;

    GLFWwindow* window = glfwCreateWindow(800, 600, "NoodleType", NULL, NULL);
    if (!window) return -1;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    ImageLoad icon("assets/images/icon.png");
    icon.setIcon(window);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 130");

    // style
    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();
    style.WindowRounding = 0.0f;
    style.WindowBorderSize = 0.0f;

    // start back color
    float backgroundColor[3] = { 0.5f, 0.5f, 0.5f }; // grey
    bool showSettings = false;
    bool showStart = false;

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // main menu
        ImGui::SetNextWindowPos(ImVec2(0, 0));
        ImGui::SetNextWindowSize(io.DisplaySize);
        ImGui::Begin("Main Menu", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);

        ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize("NoodleType").x) / 2);
        ImGui::Text("NoodleType");

        ImGui::Spacing();
        ImGui::Spacing();
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 50);

        // "Start"
        ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
        if (ImGui::Button("Start", ImVec2(200, 50))) {
            showStart = !showStart;
        }

        // "My Records"
        ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
        if (ImGui::Button("My Records", ImVec2(200, 50))) {
            printf("My Records button clicked!\n");
        }

        // "Settings"
        ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
        if (ImGui::Button("Settings", ImVec2(200, 50))) {
            showSettings = !showSettings;
        }

        // "Exit"
        ImGui::SetCursorPosX((ImGui::GetWindowSize().x - 200) / 2);
        if (ImGui::Button("Exit", ImVec2(200, 50))) {
            break;
        }

        ImGui::End();

        // start inside
        if (showStart){
            RenderFrame(showStart);
        }

        // settings inside
        if (showSettings) {
            settingsRender(showSettings,backgroundColor);
        }

        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(backgroundColor[0], backgroundColor[1], backgroundColor[2], 1.0f); //Color update
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        glfwSwapBuffers(window);
    }

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
