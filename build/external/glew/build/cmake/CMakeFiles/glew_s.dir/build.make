# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lofi/Desktop/NoodleType

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lofi/Desktop/NoodleType/build

# Include any dependencies generated for this target.
include external/glew/build/cmake/CMakeFiles/glew_s.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include external/glew/build/cmake/CMakeFiles/glew_s.dir/compiler_depend.make

# Include the progress variables for this target.
include external/glew/build/cmake/CMakeFiles/glew_s.dir/progress.make

# Include the compile flags for this target's objects.
include external/glew/build/cmake/CMakeFiles/glew_s.dir/flags.make

external/glew/build/cmake/CMakeFiles/glew_s.dir/__/__/src/glew.c.o: external/glew/build/cmake/CMakeFiles/glew_s.dir/flags.make
external/glew/build/cmake/CMakeFiles/glew_s.dir/__/__/src/glew.c.o: /home/lofi/Desktop/NoodleType/external/glew/src/glew.c
external/glew/build/cmake/CMakeFiles/glew_s.dir/__/__/src/glew.c.o: external/glew/build/cmake/CMakeFiles/glew_s.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object external/glew/build/cmake/CMakeFiles/glew_s.dir/__/__/src/glew.c.o"
	cd /home/lofi/Desktop/NoodleType/build/external/glew/build/cmake && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT external/glew/build/cmake/CMakeFiles/glew_s.dir/__/__/src/glew.c.o -MF CMakeFiles/glew_s.dir/__/__/src/glew.c.o.d -o CMakeFiles/glew_s.dir/__/__/src/glew.c.o -c /home/lofi/Desktop/NoodleType/external/glew/src/glew.c

external/glew/build/cmake/CMakeFiles/glew_s.dir/__/__/src/glew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/glew_s.dir/__/__/src/glew.c.i"
	cd /home/lofi/Desktop/NoodleType/build/external/glew/build/cmake && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lofi/Desktop/NoodleType/external/glew/src/glew.c > CMakeFiles/glew_s.dir/__/__/src/glew.c.i

external/glew/build/cmake/CMakeFiles/glew_s.dir/__/__/src/glew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/glew_s.dir/__/__/src/glew.c.s"
	cd /home/lofi/Desktop/NoodleType/build/external/glew/build/cmake && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lofi/Desktop/NoodleType/external/glew/src/glew.c -o CMakeFiles/glew_s.dir/__/__/src/glew.c.s

# Object files for target glew_s
glew_s_OBJECTS = \
"CMakeFiles/glew_s.dir/__/__/src/glew.c.o"

# External object files for target glew_s
glew_s_EXTERNAL_OBJECTS =

lib/libGLEW.a: external/glew/build/cmake/CMakeFiles/glew_s.dir/__/__/src/glew.c.o
lib/libGLEW.a: external/glew/build/cmake/CMakeFiles/glew_s.dir/build.make
lib/libGLEW.a: external/glew/build/cmake/CMakeFiles/glew_s.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../../../../lib/libGLEW.a"
	cd /home/lofi/Desktop/NoodleType/build/external/glew/build/cmake && $(CMAKE_COMMAND) -P CMakeFiles/glew_s.dir/cmake_clean_target.cmake
	cd /home/lofi/Desktop/NoodleType/build/external/glew/build/cmake && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glew_s.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/glew/build/cmake/CMakeFiles/glew_s.dir/build: lib/libGLEW.a
.PHONY : external/glew/build/cmake/CMakeFiles/glew_s.dir/build

external/glew/build/cmake/CMakeFiles/glew_s.dir/clean:
	cd /home/lofi/Desktop/NoodleType/build/external/glew/build/cmake && $(CMAKE_COMMAND) -P CMakeFiles/glew_s.dir/cmake_clean.cmake
.PHONY : external/glew/build/cmake/CMakeFiles/glew_s.dir/clean

external/glew/build/cmake/CMakeFiles/glew_s.dir/depend:
	cd /home/lofi/Desktop/NoodleType/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lofi/Desktop/NoodleType /home/lofi/Desktop/NoodleType/external/glew/build/cmake /home/lofi/Desktop/NoodleType/build /home/lofi/Desktop/NoodleType/build/external/glew/build/cmake /home/lofi/Desktop/NoodleType/build/external/glew/build/cmake/CMakeFiles/glew_s.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : external/glew/build/cmake/CMakeFiles/glew_s.dir/depend

