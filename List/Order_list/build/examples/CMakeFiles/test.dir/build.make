# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wxg/Working/Github/Data_structure/List/Order_list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxg/Working/Github/Data_structure/List/Order_list/build

# Include any dependencies generated for this target.
include examples/CMakeFiles/test.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/test.dir/flags.make

examples/CMakeFiles/test.dir/test.o: examples/CMakeFiles/test.dir/flags.make
examples/CMakeFiles/test.dir/test.o: ../examples/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wxg/Working/Github/Data_structure/List/Order_list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/test.dir/test.o"
	cd /home/wxg/Working/Github/Data_structure/List/Order_list/build/examples && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test.dir/test.o -c /home/wxg/Working/Github/Data_structure/List/Order_list/examples/test.cpp

examples/CMakeFiles/test.dir/test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.dir/test.i"
	cd /home/wxg/Working/Github/Data_structure/List/Order_list/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxg/Working/Github/Data_structure/List/Order_list/examples/test.cpp > CMakeFiles/test.dir/test.i

examples/CMakeFiles/test.dir/test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.dir/test.s"
	cd /home/wxg/Working/Github/Data_structure/List/Order_list/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxg/Working/Github/Data_structure/List/Order_list/examples/test.cpp -o CMakeFiles/test.dir/test.s

examples/CMakeFiles/test.dir/test.o.requires:

.PHONY : examples/CMakeFiles/test.dir/test.o.requires

examples/CMakeFiles/test.dir/test.o.provides: examples/CMakeFiles/test.dir/test.o.requires
	$(MAKE) -f examples/CMakeFiles/test.dir/build.make examples/CMakeFiles/test.dir/test.o.provides.build
.PHONY : examples/CMakeFiles/test.dir/test.o.provides

examples/CMakeFiles/test.dir/test.o.provides.build: examples/CMakeFiles/test.dir/test.o


# Object files for target test
test_OBJECTS = \
"CMakeFiles/test.dir/test.o"

# External object files for target test
test_EXTERNAL_OBJECTS =

examples/test: examples/CMakeFiles/test.dir/test.o
examples/test: examples/CMakeFiles/test.dir/build.make
examples/test: src/liblist_function.a
examples/test: examples/CMakeFiles/test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wxg/Working/Github/Data_structure/List/Order_list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test"
	cd /home/wxg/Working/Github/Data_structure/List/Order_list/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/test.dir/build: examples/test

.PHONY : examples/CMakeFiles/test.dir/build

examples/CMakeFiles/test.dir/requires: examples/CMakeFiles/test.dir/test.o.requires

.PHONY : examples/CMakeFiles/test.dir/requires

examples/CMakeFiles/test.dir/clean:
	cd /home/wxg/Working/Github/Data_structure/List/Order_list/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/test.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/test.dir/clean

examples/CMakeFiles/test.dir/depend:
	cd /home/wxg/Working/Github/Data_structure/List/Order_list/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxg/Working/Github/Data_structure/List/Order_list /home/wxg/Working/Github/Data_structure/List/Order_list/examples /home/wxg/Working/Github/Data_structure/List/Order_list/build /home/wxg/Working/Github/Data_structure/List/Order_list/build/examples /home/wxg/Working/Github/Data_structure/List/Order_list/build/examples/CMakeFiles/test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/test.dir/depend

