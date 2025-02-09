#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include "Image_load.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "imgui.h"

#include <iostream>
#include <string>



ImageLoad::ImageLoad(const std::string& pathToImage) : m_pathToImage(pathToImage), textureID(0) {
    // Upload an image
    image_data = stbi_load(
        m_pathToImage.c_str(),
        &m_image_width,
        &m_image_height,
        &m_image_channels,
        4
    );

    if (image_data) {   // setting up GLFWimage (for icon)
        user_image.width = m_image_width;
        user_image.height = m_image_height;
        user_image.pixels = image_data;

        // Generate OpenGL texture
        generateTexture();
    } else {
        std::cerr << "Failed to load image: " << m_pathToImage << "\n" << stbi_failure_reason() << std::endl;
    }
}

// Generate OpenGL texture
void ImageLoad::generateTexture() {
    glGenTextures(1, &textureID);
    glBindTexture(GL_TEXTURE_2D, textureID);
    glEnable(GL_TEXTURE_2D);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, m_image_width, m_image_height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    
    glBindTexture(GL_TEXTURE_2D, 0);
}

void ImageLoad::setIcon(GLFWwindow* window) {
    if (image_data != nullptr) {
        glfwSetWindowIcon(window, 1, &user_image);
    }
}

// Draw image with ImGui
void ImageLoad::draw(float x, float y, float width, float height) {
    if (textureID) {
        ImGui::SetCursorPos(ImVec2(x, y)); // Set position
        ImGui::Image(static_cast<ImTextureID>(static_cast<uintptr_t>(textureID)), ImVec2(width, height));
    }
}

ImageLoad::~ImageLoad() {
    if (image_data) {
        stbi_image_free(image_data);
    }
    if (textureID) {
        glDeleteTextures(1, &textureID);
    }
}
