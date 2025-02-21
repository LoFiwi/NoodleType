cmake_minimum_required(VERSION 3.10)
project(NoodleType)
set(CMAKE_CXX_STANDARD 17)

# Визначаємо файли проекту
set(SOURCES
    src/main.cpp
    src/ImageLoad.cpp
    src/main_menu/MenuButtons.cpp
    src/API/TypingSpeedAPI.cpp
    imgui-master/imgui.cpp
    imgui-master/imgui_draw.cpp
    imgui-master/imgui_widgets.cpp
    imgui-master/imgui_tables.cpp
    imgui-master/backends/imgui_impl_glfw.cpp
    imgui-master/backends/imgui_impl_opengl3.cpp
)

# Підключаємо платформо-специфічні налаштування
if(WIN32)
    include(${CMAKE_SOURCE_DIR}/cmake/windows.cmake)
elseif(APPLE)
    include(${CMAKE_SOURCE_DIR}/cmake/macos.cmake)
elseif(UNIX)
    include(${CMAKE_SOURCE_DIR}/cmake/linux.cmake)
endif()