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
include _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/depend.make

# Include the progress variables for this target.
include _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/flags.make

_deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/output_test_helper.cc.o: _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/flags.make
_deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/output_test_helper.cc.o: _deps/googlebenchmark-src/test/output_test_helper.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sa/Cpp/cmake_project_test/IndexProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/output_test_helper.cc.o"
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/output_test_helper.dir/output_test_helper.cc.o -c /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/output_test_helper.cc

_deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/output_test_helper.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/output_test_helper.dir/output_test_helper.cc.i"
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/output_test_helper.cc > CMakeFiles/output_test_helper.dir/output_test_helper.cc.i

_deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/output_test_helper.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/output_test_helper.dir/output_test_helper.cc.s"
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test/output_test_helper.cc -o CMakeFiles/output_test_helper.dir/output_test_helper.cc.s

# Object files for target output_test_helper
output_test_helper_OBJECTS = \
"CMakeFiles/output_test_helper.dir/output_test_helper.cc.o"

# External object files for target output_test_helper
output_test_helper_EXTERNAL_OBJECTS =

_deps/googlebenchmark-build/test/liboutput_test_helper.a: _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/output_test_helper.cc.o
_deps/googlebenchmark-build/test/liboutput_test_helper.a: _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/build.make
_deps/googlebenchmark-build/test/liboutput_test_helper.a: _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sa/Cpp/cmake_project_test/IndexProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liboutput_test_helper.a"
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test && $(CMAKE_COMMAND) -P CMakeFiles/output_test_helper.dir/cmake_clean_target.cmake
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/output_test_helper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/build: _deps/googlebenchmark-build/test/liboutput_test_helper.a

.PHONY : _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/build

_deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/clean:
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test && $(CMAKE_COMMAND) -P CMakeFiles/output_test_helper.dir/cmake_clean.cmake
.PHONY : _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/clean

_deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/depend:
	cd /home/sa/Cpp/cmake_project_test/IndexProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sa/Cpp/cmake_project_test/IndexProject /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-src/test /home/sa/Cpp/cmake_project_test/IndexProject/build /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test /home/sa/Cpp/cmake_project_test/IndexProject/build/_deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/googlebenchmark-build/test/CMakeFiles/output_test_helper.dir/depend

