#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

#include <curlpp/cURLpp.hpp>   // Ініціалізація cURLpp
#include <curlpp/Easy.hpp>    // Для класу Easy
#include <curlpp/Options.hpp> // Для роботи з параметрами

#include <nlohmann/json.hpp>
#include <iostream>

void initOpenGL(GLFWwindow*& window) {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        exit(EXIT_FAILURE);
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    window = glfwCreateWindow(1280, 720, "NoodleType", NULL, NULL);
    if (window == NULL) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW" << std::endl;
        exit(EXIT_FAILURE);
    }
}

void initImGui(GLFWwindow* window) {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    (void)io;

    ImGui::StyleColorsDark();
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 130");
}

void testCurl() {
    try {
        curlpp::Cleanup cleanup;
        curlpp::Easy request;
        request.setOpt<curlpp::options::Url>("https://api.github.com");

        std::ostringstream response;
        request.setOpt<curlpp::options::WriteStream>(&response);
        request.perform();

        std::cout << "Response: " << response.str() << std::endl;
    } catch (const curlpp::RuntimeError& e) {
        std::cerr << "cURLpp runtime error: " << e.what() << std::endl;
    } catch (const curlpp::LogicError& e) {
        std::cerr << "cURLpp logic error: " << e.what() << std::endl;
    }
}

void renderLoop(GLFWwindow* window) {
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        glClearColor(0.45f, 0.55f, 0.60f, 1.00f);
        glClear(GL_COLOR_BUFFER_BIT);

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        ImGui::Begin("Hello, ImGui!");
        ImGui::Text("This is an example of using ImGui with OpenGL and GLFW!");
        ImGui::End();

        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        glfwSwapBuffers(window);
    }
}

int main() {
    GLFWwindow* window;

    initOpenGL(window);
    initImGui(window);

    std::cout << "Testing cURLpp..." << std::endl;
    testCurl();

    renderLoop(window);

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
