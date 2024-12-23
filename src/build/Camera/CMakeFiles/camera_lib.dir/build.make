# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/alina/Desktop/PAOO/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alina/Desktop/PAOO/src/build

# Include any dependencies generated for this target.
include Camera/CMakeFiles/camera_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Camera/CMakeFiles/camera_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include Camera/CMakeFiles/camera_lib.dir/progress.make

# Include the compile flags for this target's objects.
include Camera/CMakeFiles/camera_lib.dir/flags.make

Camera/CMakeFiles/camera_lib.dir/camera.cpp.o: Camera/CMakeFiles/camera_lib.dir/flags.make
Camera/CMakeFiles/camera_lib.dir/camera.cpp.o: ../Camera/camera.cpp
Camera/CMakeFiles/camera_lib.dir/camera.cpp.o: Camera/CMakeFiles/camera_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alina/Desktop/PAOO/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Camera/CMakeFiles/camera_lib.dir/camera.cpp.o"
	cd /home/alina/Desktop/PAOO/src/build/Camera && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Camera/CMakeFiles/camera_lib.dir/camera.cpp.o -MF CMakeFiles/camera_lib.dir/camera.cpp.o.d -o CMakeFiles/camera_lib.dir/camera.cpp.o -c /home/alina/Desktop/PAOO/src/Camera/camera.cpp

Camera/CMakeFiles/camera_lib.dir/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/camera_lib.dir/camera.cpp.i"
	cd /home/alina/Desktop/PAOO/src/build/Camera && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alina/Desktop/PAOO/src/Camera/camera.cpp > CMakeFiles/camera_lib.dir/camera.cpp.i

Camera/CMakeFiles/camera_lib.dir/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/camera_lib.dir/camera.cpp.s"
	cd /home/alina/Desktop/PAOO/src/build/Camera && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alina/Desktop/PAOO/src/Camera/camera.cpp -o CMakeFiles/camera_lib.dir/camera.cpp.s

# Object files for target camera_lib
camera_lib_OBJECTS = \
"CMakeFiles/camera_lib.dir/camera.cpp.o"

# External object files for target camera_lib
camera_lib_EXTERNAL_OBJECTS =

Camera/libcamera_lib.a: Camera/CMakeFiles/camera_lib.dir/camera.cpp.o
Camera/libcamera_lib.a: Camera/CMakeFiles/camera_lib.dir/build.make
Camera/libcamera_lib.a: Camera/CMakeFiles/camera_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alina/Desktop/PAOO/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcamera_lib.a"
	cd /home/alina/Desktop/PAOO/src/build/Camera && $(CMAKE_COMMAND) -P CMakeFiles/camera_lib.dir/cmake_clean_target.cmake
	cd /home/alina/Desktop/PAOO/src/build/Camera && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/camera_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Camera/CMakeFiles/camera_lib.dir/build: Camera/libcamera_lib.a
.PHONY : Camera/CMakeFiles/camera_lib.dir/build

Camera/CMakeFiles/camera_lib.dir/clean:
	cd /home/alina/Desktop/PAOO/src/build/Camera && $(CMAKE_COMMAND) -P CMakeFiles/camera_lib.dir/cmake_clean.cmake
.PHONY : Camera/CMakeFiles/camera_lib.dir/clean

Camera/CMakeFiles/camera_lib.dir/depend:
	cd /home/alina/Desktop/PAOO/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alina/Desktop/PAOO/src /home/alina/Desktop/PAOO/src/Camera /home/alina/Desktop/PAOO/src/build /home/alina/Desktop/PAOO/src/build/Camera /home/alina/Desktop/PAOO/src/build/Camera/CMakeFiles/camera_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Camera/CMakeFiles/camera_lib.dir/depend

