#include <fstream>
#include <cstdio>

void SaveBackgroundColor(const float* color) {
    std::ofstream file("settings.txt");
    if (file.is_open()) {
        file << color[0] << " " << color[1] << " " << color[2] << "\n";
        file.close();
        printf("Background color saved to settings.txt\n");
    } else {
        printf("Failed to open file for saving\n");
    }
}

void LoadBackgroundColor(float* color) {
    std::ifstream file("settings.txt");
    if (file.is_open()) {
        file >> color[0] >> color[1] >> color[2];
        file.close();
        printf("Background color loaded from settings.txt\n");
    } else {
        printf("No settings file found, using default color\n");
    }
}
