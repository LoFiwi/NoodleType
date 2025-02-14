# Windows-специфічні налаштування
add_definitions(-DWINDOWS)

# Налаштування vcpkg
if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
        CACHE STRING "")
endif()

# Пошук залежностей через vcpkg
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(CURL CONFIG REQUIRED)
find_package(curlpp CONFIG REQUIRED)

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
    GLEW::GLEW
    glfw
    curlpp::curlpp
)