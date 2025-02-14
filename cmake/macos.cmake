# MacOS-специфічні налаштування
add_definitions(-DMACOS)

# Пошук бібліотек через Homebrew
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(CURL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(CURLPP REQUIRED curlpp)

# Підключення заголовочних файлів
include_directories(
    ${CMAKE_SOURCE_DIR}/external/json/include
    ${CMAKE_SOURCE_DIR}/imgui-master
    ${CMAKE_SOURCE_DIR}/imgui-master/backends
    ${CMAKE_SOURCE_DIR}/external
)

# Створення виконуваного файлу
add_executable(${PROJECT_NAME} ${SOURCES})

# Лінкування бібліотек
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    OpenGL::GL
    GLEW
    glfw
    ${CURLPP_LIBRARIES}
    "-framework Cocoa"
    "-framework IOKit"
    "-framework CoreFoundation"
)