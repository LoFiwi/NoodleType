#ifndef IMAGE_LOAD_H
#define IMAGE_LOAD_H

#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <string>

class ImageLoad {
private:
    int m_image_width, m_image_height, m_image_channels;
    std::string m_pathToImage;
    unsigned char* image_data;
    GLFWimage user_image;
    GLuint textureID; // texture ID for OpenGL

    void generateTexture(); // Private method for texture creating

public:
    ImageLoad(const std::string& pathToImage);
    void setIcon(GLFWwindow* window);  // set icon
    void draw(float x, float y, float width, float height); // Draw in ImGui
    ~ImageLoad();
};

#endif
