# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/sa/Cpp/cmake_project_test/IndexProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sa/Cpp/cmake_project_test/IndexProject/build

# Include any dependencies generated for this target.
include src/CMakeFiles/src_lib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/src_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/src_lib.dir/flags.make

src/CMakeFiles/src_lib.dir/Formula.cpp.o: src/CMakeFiles/src_lib.dir/flags.make
src/CMakeFiles/src_lib.dir/Formula.cpp.o: ../src/Formula.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sa/Cpp/cmake_project_test/IndexProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/src_lib.dir/Formula.cpp.o"
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src_lib.dir/Formula.cpp.o -c /home/sa/Cpp/cmake_project_test/IndexProject/src/Formula.cpp

src/CMakeFiles/src_lib.dir/Formula.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src_lib.dir/Formula.cpp.i"
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sa/Cpp/cmake_project_test/IndexProject/src/Formula.cpp > CMakeFiles/src_lib.dir/Formula.cpp.i

src/CMakeFiles/src_lib.dir/Formula.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src_lib.dir/Formula.cpp.s"
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sa/Cpp/cmake_project_test/IndexProject/src/Formula.cpp -o CMakeFiles/src_lib.dir/Formula.cpp.s

# Object files for target src_lib
src_lib_OBJECTS = \
"CMakeFiles/src_lib.dir/Formula.cpp.o"

# External object files for target src_lib
src_lib_EXTERNAL_OBJECTS =

src/libsrc_lib.so: src/CMakeFiles/src_lib.dir/Formula.cpp.o
src/libsrc_lib.so: src/CMakeFiles/src_lib.dir/build.make
src/libsrc_lib.so: src/CMakeFiles/src_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sa/Cpp/cmake_project_test/IndexProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libsrc_lib.so"
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/src_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/src_lib.dir/build: src/libsrc_lib.so

.PHONY : src/CMakeFiles/src_lib.dir/build

src/CMakeFiles/src_lib.dir/clean:
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/src_lib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/src_lib.dir/clean

src/CMakeFiles/src_lib.dir/depend:
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sa/Cpp/cmake_project_test/IndexProject /home/sa/Cpp/cmake_project_test/IndexProject/src /home/sa/Cpp/cmake_project_test/IndexProject/build /home/sa/Cpp/cmake_project_test/IndexProject/build/src /home/sa/Cpp/cmake_project_test/IndexProject/build/src/CMakeFiles/src_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/src_lib.dir/depend
