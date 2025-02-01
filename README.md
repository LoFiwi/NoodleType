# NoodleType Project

NoodleType - A cross-platform application for training the speed of typing from the keyboard, useful both for ordinary users and for programmers who want to speed up typing. 

## Installation Guide 🚀

This project requires several external libraries and uses **Git submodules**. Follow the instructions below to set up the project on different platforms.

## Cloning the Repository with Submodules 📥

Since this project includes submodules, you need to clone it with the `--recurse-submodules` flag:

```bash
git clone --recurse-submodules https://github.com/LoFiwi/NoodleType
```

If you have already cloned the repository without submodules, initialize them manually:

```bash
git submodule update --init --recursive
```

### Linux(Debian/Ubuntu) 💻

1. **Install Dependencies**:  
   - Install **CMake**: `sudo apt-get install cmake`
   - Install **GLFW**: `sudo apt-get install libglfw3-dev`
   - Install **GLEW**: `sudo apt-get install libglew-dev`
   - Install **cURL**: `sudo apt-get install libcurl4-openssl-dev`
   - Install **curlpp** via vcpkg if you are using it.

2. **Build the Project**:  
   In the terminal, navigate to the project directory and run:
   ```bash
   cmake -B build
   cmake --build build
   ```
   
### macOS 🍏

1. **Install Dependencies**:  
   - Install **Homebrew**: [Install Homebrew](https://brew.sh/)
   - Install **CMake**: `brew install cmake`
   - Install **GLFW**: `brew install glfw`
   - Install **GLEW**: `brew install glew`
   - Install **curlpp** via vcpkg if needed.

2. **Build the Project**:  
   In the terminal, navigate to the project directory and run:
   ```bash
   cmake -B build
   cmake --build build
   ```
   
### Windows 🖥️

1. **Install Dependencies**:  
   - Install **CMake**: [Download CMake](https://cmake.org/download/)
   - Install **vcpkg**: [vcpkg Installation Guide](https://github.com/microsoft/vcpkg)
   - Install **Visual Studio** (recommended): [Download Visual Studio](https://visualstudio.microsoft.com/downloads/)
   
2. **Install Libraries** via vcpkg:  
   In the command prompt, navigate to your project directory and run the following:
   ```bash
   ./vcpkg install glfw3 curlpp glew
   ```

3. **Build the Project**:  
   - Open the project directory in **Visual Studio** or run:
     ```bash
     cmake -B build -DCMAKE_TOOLCHAIN_FILE=C:/path/to/vcpkg.cake
     cmake --build build
     ```
---

### Notes 📝

- Ensure that **vcpkg** is installed and correctly set up for each platform to manage dependencies easily.
- If using **vcpkg**, make sure the toolchain file is specified during the CMake configuration step.
- **GLFW**, **GLEW**, and **curlpp** are essential for this project. If they are not installed globally, install them via vcpkg or package managers (Linux/Mac).
