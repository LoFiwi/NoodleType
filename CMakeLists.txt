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

# GLFW
add_subdirectory(external/glfw)
include_directories(external/glfw/include)

# GLEW
add_subdirectory(external/glew/build/cmake)
include_directories(external/glew/include)

# curlpp
add_subdirectory(external/curlpp)
include_directories(external/curlpp/include)

# nlohmann/json
include_directories(external/json/include)

include_directories(imgui-master imgui-master/backends)

add_executable(NoodleType ${SOURCES})

target_link_libraries(NoodleType
    glfw
    OpenGL::GL
    glew 
    curlpp
    ${CURL_LIBRARIES}
)