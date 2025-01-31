#include "Image_load.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include <iostream>
#include <string>

#include "GLFW/glfw3.h"

ImageLoad::ImageLoad(const std::string& pathToImage):m_pathToImage(pathToImage){
    image_data = stbi_load(
        m_pathToImage.c_str(),
        &m_image_width,
        &m_image_height,
        &m_image_channels,
        4
    );

    if (image_data) {   // Set up GLFWimage
        user_image.width = m_image_width;
        user_image.height = m_image_height;
        user_image.pixels = image_data;
    } else {
        std::cerr << "Failed to load image: " << m_pathToImage << "\n" << stbi_failure_reason() << std::endl;
    }
}

void ImageLoad::setIcon(GLFWwindow* window){
    if(image_data != nullptr){
        glfwSetWindowIcon(window, 1, &user_image);
    }
}

ImageLoad::~ImageLoad(){
    if(image_data){
        stbi_image_free(image_data);
    }
}