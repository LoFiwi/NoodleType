cmake_minimum_required(VERSION 3.10)
project(NoodleType)

set(CMAKE_CXX_STANDARD 17)

# Вихідні файли
set(SOURCES
    src/main.cpp
<<<<<<< Updated upstream
=======
    src/Image_load.cpp
    src/main_menu/buttons.cpp
    src/API/TypingSpeedAPI.cpp
>>>>>>> Stashed changes
    imgui-master/imgui.cpp
    imgui-master/imgui_draw.cpp
    imgui-master/imgui_widgets.cpp
    imgui-master/imgui_tables.cpp
    imgui-master/backends/imgui_impl_glfw.cpp
    imgui-master/backends/imgui_impl_opengl3.cpp
)

# Пошук OpenGL
find_package(OpenGL REQUIRED)

# GLFW
add_subdirectory(external/glfw)
include_directories(external/glfw/include)

# GLEW
add_subdirectory(external/glew/build/cmake)

# Визначення шляхів для GLEW залежно від ОС
if(WIN32)
    set_target_properties(glew PROPERTIES
        IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/external/glew/lib/Release/glew32s.lib
        INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_SOURCE_DIR}/external/glew/include
    )
elseif(UNIX)
    set_target_properties(glew PROPERTIES
        IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/external/glew/lib/libGLEW.a
        INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_SOURCE_DIR}/external/glew/include
    )
endif()

# cURLpp
add_subdirectory(external/curlpp)
include_directories(external/curlpp/include)

# JSON
include_directories(external/json/include)

# ImGui
include_directories(imgui-master imgui-master/backends)

<<<<<<< Updated upstream
# Виконуваний файл
add_executable(NoodleType ${SOURCES})
=======
# for stb_image.h
include_directories(${CMAKE_SOURCE_DIR}/external/)

add_definitions(-DASSETS_PATH="${PROJECT_SOURCE_DIR}/assets")

add_executable(NoodleType ${SOURCES} "src/main_menu/buttons.cpp")
>>>>>>> Stashed changes

# Лінкування
target_link_libraries(NoodleType
    glfw
    OpenGL::GL
    glew_s
    curlpp
)
