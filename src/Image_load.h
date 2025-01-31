#ifndef IMAGE_LOAD_H
#define IMAGE_LOAD_H

#include <string>

#include "GLFW/glfw3.h"

class ImageLoad{
    private:
    int m_image_width, m_image_height, m_image_channels;
    std::string m_pathToImage;
    unsigned char* image_data;
    GLFWimage user_image;

    public:
        ImageLoad(const std::string& pathToImage);  // Load image by Path to it.

        void setIcon(GLFWwindow* window);   // Set Icon to app window.

        ~ImageLoad();
};

#endif