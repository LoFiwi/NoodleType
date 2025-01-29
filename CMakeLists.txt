cmake_minimum_required(VERSION 3.10)
project(NoodleType)

set(CMAKE_CXX_STANDARD 17)

# Вихідні файли
set(SOURCES
    src/main.cpp
    imgui-master/imgui.cpp
    imgui-master/imgui_draw.cpp
    imgui-master/imgui_widgets.cpp
    imgui-master/imgui_tables.cpp
    imgui-master/backends/imgui_impl_glfw.cpp
    imgui-master/backends/imgui_impl_opengl3.cpp
)

# Визначення ОС
if(WIN32)
    add_definitions(-DWINDOWS)
elseif(APPLE)
    add_definitions(-DMACOS)
elseif(UNIX)
    add_definitions(-DLINUX)
endif()

find_package(OpenGL REQUIRED)
find_package(GLEW QUIET)
find_package(glfw3 QUIET)

#GLFW
if(NOT glfw3_FOUND)
    add_subdirectory(external/glfw)
    include_directories(external/glfw/include)
    set(GLFW_LIB glfw)
else()
    set(GLFW_LIB glfw)
endif()

#GLEW
if(NOT GLEW_FOUND)

    if(WIN32)
        if(CMAKE_SIZEOF_VOID_P EQUAL 8)
            include_directories(external/glewWin32/include)
            set(GLEW_LIB ${CMAKE_SOURCE_DIR}/external/glewWin32/lib/Release/x64/glew32s.lib)
        else()
            include_directories(external/glewWin32/include)
            set(GLEW_LIB ${CMAKE_SOURCE_DIR}/external/glewWin32/lib/Release/Win32/glew32s.lib)
        endif()
    else()
        add_subdirectory(external/glew/build/cmake)
        include_directories(external/glew/include)
        set(GLEW_LIB ${CMAKE_SOURCE_DIR}/external/glew/lib/libGLEW.a)
    endif()

else()
    message(STATUS "GLEW found via find_package")
    set(GLEW_LIB GLEW)
endif()

#cURLpp
add_subdirectory(external/curlpp)
include_directories(external/curlpp/include)

#JSON
include_directories(external/json/include)

#ImGui
include_directories(imgui-master imgui-master/backends)

add_executable(NoodleType ${SOURCES})

target_link_libraries(NoodleType ${GLFW_LIB} OpenGL::GL ${GLEW_LIB} curlpp)
