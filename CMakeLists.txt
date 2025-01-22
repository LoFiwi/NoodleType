cmake_minimum_required(VERSION 3.10)

project(NoodleType)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/main.cpp
    imgui-master/imgui.cpp
    imgui-master/imgui_draw.cpp
    imgui-master/imgui_widgets.cpp
    imgui-master/imgui_tables.cpp
    imgui-master/backends/imgui_impl_glfw.cpp
    imgui-master/backends/imgui_impl_opengl3.cpp
)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

include_directories(imgui-master imgui-master/backends)

add_executable(NoodleType ${SOURCES})

target_link_libraries(NoodleType ${OPENGL_LIBRARIES} GLEW::GLEW glfw)