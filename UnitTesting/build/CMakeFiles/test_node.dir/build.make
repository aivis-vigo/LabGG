# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aivisvigo/LabGG/UnitTesting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aivisvigo/LabGG/UnitTesting/build

# Include any dependencies generated for this target.
include CMakeFiles/test_node.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_node.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_node.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_node.dir/flags.make

CMakeFiles/test_node.dir/test_node.cpp.o: CMakeFiles/test_node.dir/flags.make
CMakeFiles/test_node.dir/test_node.cpp.o: /Users/aivisvigo/LabGG/UnitTesting/test_node.cpp
CMakeFiles/test_node.dir/test_node.cpp.o: CMakeFiles/test_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aivisvigo/LabGG/UnitTesting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_node.dir/test_node.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_node.dir/test_node.cpp.o -MF CMakeFiles/test_node.dir/test_node.cpp.o.d -o CMakeFiles/test_node.dir/test_node.cpp.o -c /Users/aivisvigo/LabGG/UnitTesting/test_node.cpp

CMakeFiles/test_node.dir/test_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_node.dir/test_node.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aivisvigo/LabGG/UnitTesting/test_node.cpp > CMakeFiles/test_node.dir/test_node.cpp.i

CMakeFiles/test_node.dir/test_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_node.dir/test_node.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aivisvigo/LabGG/UnitTesting/test_node.cpp -o CMakeFiles/test_node.dir/test_node.cpp.s

CMakeFiles/test_node.dir/node.cpp.o: CMakeFiles/test_node.dir/flags.make
CMakeFiles/test_node.dir/node.cpp.o: /Users/aivisvigo/LabGG/UnitTesting/node.cpp
CMakeFiles/test_node.dir/node.cpp.o: CMakeFiles/test_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aivisvigo/LabGG/UnitTesting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_node.dir/node.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_node.dir/node.cpp.o -MF CMakeFiles/test_node.dir/node.cpp.o.d -o CMakeFiles/test_node.dir/node.cpp.o -c /Users/aivisvigo/LabGG/UnitTesting/node.cpp

CMakeFiles/test_node.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_node.dir/node.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aivisvigo/LabGG/UnitTesting/node.cpp > CMakeFiles/test_node.dir/node.cpp.i

CMakeFiles/test_node.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_node.dir/node.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aivisvigo/LabGG/UnitTesting/node.cpp -o CMakeFiles/test_node.dir/node.cpp.s

# Object files for target test_node
test_node_OBJECTS = \
"CMakeFiles/test_node.dir/test_node.cpp.o" \
"CMakeFiles/test_node.dir/node.cpp.o"

# External object files for target test_node
test_node_EXTERNAL_OBJECTS =

test_node: CMakeFiles/test_node.dir/test_node.cpp.o
test_node: CMakeFiles/test_node.dir/node.cpp.o
test_node: CMakeFiles/test_node.dir/build.make
test_node: /opt/homebrew/lib/libgtest.a
test_node: CMakeFiles/test_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/aivisvigo/LabGG/UnitTesting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test_node"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_node.dir/build: test_node
.PHONY : CMakeFiles/test_node.dir/build

CMakeFiles/test_node.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_node.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_node.dir/clean

CMakeFiles/test_node.dir/depend:
	cd /Users/aivisvigo/LabGG/UnitTesting/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aivisvigo/LabGG/UnitTesting /Users/aivisvigo/LabGG/UnitTesting /Users/aivisvigo/LabGG/UnitTesting/build /Users/aivisvigo/LabGG/UnitTesting/build /Users/aivisvigo/LabGG/UnitTesting/build/CMakeFiles/test_node.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_node.dir/depend

