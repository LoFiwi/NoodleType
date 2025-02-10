#include "GL/glew.h"
#include <GLFW/glfw3.h>

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

#include "stb_image.h"
#include "curlpp/cURLpp.hpp"

#include <cstdio>

#include "main_menu/info.cpp"
#include "main_menu/MenuButtons.h"
#include "Image_load.h"

int main() {
    if (!glfwInit()) return -1;

    GLFWwindow* window = glfwCreateWindow(800, 600, "NoodleType", NULL, NULL);
    if (!window) return -1;
    glfwMakeContextCurrent(window);
    glewInit();
    glfwSwapInterval(1);

    ImageLoad icon("assets/images/icon.png");
    icon.setIcon(window);

    ImageLoad logo("assets/images/logo.png");
    ImageLoad noodleText("assets/images/noodle_Top.png");

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

    bool showStart = false;
    bool showSettings = false;

    ImGui::StyleColorsLight();
    ImGui::GetStyle().Colors[ImGuiCol_WindowBg] = ImVec4(0.3f, 0.3f, 0.3f, 1.0f);

    MenuButtons menuButtons;

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // main menu
        ImGui::SetNextWindowPos(ImVec2(0, 0));
        ImGui::SetNextWindowSize(io.DisplaySize);
        ImGui::Begin("Main Menu", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove);

        logo.draw(((ImGui::GetWindowSize().x - 290) / 2),39,110,110);   // x, y, width, height.
        noodleText.draw(((ImGui::GetWindowSize().x + 30)/2),39,145,110);

        ImGui::Spacing();
        ImGui::Spacing();
        ImGui::Spacing();
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10);

        // Buttons Render
        menuButtons.renderButtons();
        RenderInfoIcon();

        ImGui::End();

        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(0.8f, 0.8f, 0.8f, 1.0f);

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
