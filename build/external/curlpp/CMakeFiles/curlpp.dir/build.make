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
include external/curlpp/CMakeFiles/curlpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.make

# Include the progress variables for this target.
include external/curlpp/CMakeFiles/curlpp.dir/progress.make

# Include the compile flags for this target's objects.
include external/curlpp/CMakeFiles/curlpp.dir/flags.make

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Easy.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Easy.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Easy.cpp > CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Easy.cpp -o CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Exception.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Exception.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Exception.cpp > CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Exception.cpp -o CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Form.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Form.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Form.cpp > CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Form.cpp -o CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Multi.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Multi.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Multi.cpp > CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Multi.cpp -o CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/OptionBase.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/OptionBase.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/OptionBase.cpp > CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/OptionBase.cpp -o CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Options.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Options.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Options.cpp > CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/Options.cpp -o CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/cURLpp.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/cURLpp.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/cURLpp.cpp > CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/cURLpp.cpp -o CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/CurlHandle.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/CurlHandle.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/CurlHandle.cpp > CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/CurlHandle.cpp -o CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/OptionList.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/OptionList.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/OptionList.cpp > CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/OptionList.cpp -o CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/OptionSetter.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/OptionSetter.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/OptionSetter.cpp > CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/OptionSetter.cpp -o CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.s

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/flags.make
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o: /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/SList.cpp
external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o: external/curlpp/CMakeFiles/curlpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o -MF CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o.d -o CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o -c /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/SList.cpp

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.i"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/SList.cpp > CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.i

external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.s"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lofi/Desktop/NoodleType/external/curlpp/src/curlpp/internal/SList.cpp -o CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.s

# Object files for target curlpp
curlpp_OBJECTS = \
"CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o" \
"CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o"

# External object files for target curlpp
curlpp_EXTERNAL_OBJECTS =

external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Easy.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Exception.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Form.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Multi.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/OptionBase.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/Options.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/cURLpp.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/CurlHandle.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionList.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/OptionSetter.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/src/curlpp/internal/SList.cpp.o
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/build.make
external/curlpp/libcurlpp.so.1.0.0: /usr/lib/x86_64-linux-gnu/libcurl.so
external/curlpp/libcurlpp.so.1.0.0: external/curlpp/CMakeFiles/curlpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/lofi/Desktop/NoodleType/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX shared library libcurlpp.so"
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/curlpp.dir/link.txt --verbose=$(VERBOSE)
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && $(CMAKE_COMMAND) -E cmake_symlink_library libcurlpp.so.1.0.0 libcurlpp.so.1 libcurlpp.so

external/curlpp/libcurlpp.so.1: external/curlpp/libcurlpp.so.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate external/curlpp/libcurlpp.so.1

external/curlpp/libcurlpp.so: external/curlpp/libcurlpp.so.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate external/curlpp/libcurlpp.so

# Rule to build all files generated by this target.
external/curlpp/CMakeFiles/curlpp.dir/build: external/curlpp/libcurlpp.so
.PHONY : external/curlpp/CMakeFiles/curlpp.dir/build

external/curlpp/CMakeFiles/curlpp.dir/clean:
	cd /home/lofi/Desktop/NoodleType/build/external/curlpp && $(CMAKE_COMMAND) -P CMakeFiles/curlpp.dir/cmake_clean.cmake
.PHONY : external/curlpp/CMakeFiles/curlpp.dir/clean

external/curlpp/CMakeFiles/curlpp.dir/depend:
	cd /home/lofi/Desktop/NoodleType/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lofi/Desktop/NoodleType /home/lofi/Desktop/NoodleType/external/curlpp /home/lofi/Desktop/NoodleType/build /home/lofi/Desktop/NoodleType/build/external/curlpp /home/lofi/Desktop/NoodleType/build/external/curlpp/CMakeFiles/curlpp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : external/curlpp/CMakeFiles/curlpp.dir/depend

