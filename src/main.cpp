#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>

#include <cstdio>

int main(int, char**)
{
    // Ініціалізація GLFW
    if (!glfwInit())
        return -1;

    // Створення вікна
    GLFWwindow* window = glfwCreateWindow(1280, 720, "ImGui Test", NULL, NULL);
    if (window == NULL)
        return -1;

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Вмикає вертикальну синхронізацію

    // Ініціалізація GLEW
    if (glewInit() != GLEW_OK)
        return -1;

    // Ініціалізація ImGui
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;

    // Встановлення стилю ImGui
    ImGui::StyleColorsDark();

    // Ініціалізація бекендів ImGui
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 130");

    // Змінна для тесту
    float slider_value = 0.5f;

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        // Початок нового ImGui кадру
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // Ваш GUI код
        ImGui::Begin("Test Window");
        ImGui::Text("Welcome to ImGui!");
        ImGui::SliderFloat("float", &slider_value, 0.0f, 1.0f);
        ImGui::Text("Current Value: %.3f", slider_value);
        ImGui::End();

        // Рендеринг
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(0.45f, 0.55f, 0.60f, 1.00f);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        glfwSwapBuffers(window);
    }

    // Очищення
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}