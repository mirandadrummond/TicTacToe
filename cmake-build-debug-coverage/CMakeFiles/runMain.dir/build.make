# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mirandadrummond/CLionProjects/TicTacToe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mirandadrummond/CLionProjects/TicTacToe/cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/runMain.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/runMain.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/runMain.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runMain.dir/flags.make

CMakeFiles/runMain.dir/programMain.c.o: CMakeFiles/runMain.dir/flags.make
CMakeFiles/runMain.dir/programMain.c.o: /Users/mirandadrummond/CLionProjects/TicTacToe/programMain.c
CMakeFiles/runMain.dir/programMain.c.o: CMakeFiles/runMain.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mirandadrummond/CLionProjects/TicTacToe/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/runMain.dir/programMain.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/runMain.dir/programMain.c.o -MF CMakeFiles/runMain.dir/programMain.c.o.d -o CMakeFiles/runMain.dir/programMain.c.o -c /Users/mirandadrummond/CLionProjects/TicTacToe/programMain.c

CMakeFiles/runMain.dir/programMain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/runMain.dir/programMain.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mirandadrummond/CLionProjects/TicTacToe/programMain.c > CMakeFiles/runMain.dir/programMain.c.i

CMakeFiles/runMain.dir/programMain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/runMain.dir/programMain.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mirandadrummond/CLionProjects/TicTacToe/programMain.c -o CMakeFiles/runMain.dir/programMain.c.s

CMakeFiles/runMain.dir/tictactoe.c.o: CMakeFiles/runMain.dir/flags.make
CMakeFiles/runMain.dir/tictactoe.c.o: /Users/mirandadrummond/CLionProjects/TicTacToe/tictactoe.c
CMakeFiles/runMain.dir/tictactoe.c.o: CMakeFiles/runMain.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mirandadrummond/CLionProjects/TicTacToe/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/runMain.dir/tictactoe.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/runMain.dir/tictactoe.c.o -MF CMakeFiles/runMain.dir/tictactoe.c.o.d -o CMakeFiles/runMain.dir/tictactoe.c.o -c /Users/mirandadrummond/CLionProjects/TicTacToe/tictactoe.c

CMakeFiles/runMain.dir/tictactoe.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/runMain.dir/tictactoe.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mirandadrummond/CLionProjects/TicTacToe/tictactoe.c > CMakeFiles/runMain.dir/tictactoe.c.i

CMakeFiles/runMain.dir/tictactoe.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/runMain.dir/tictactoe.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mirandadrummond/CLionProjects/TicTacToe/tictactoe.c -o CMakeFiles/runMain.dir/tictactoe.c.s

# Object files for target runMain
runMain_OBJECTS = \
"CMakeFiles/runMain.dir/programMain.c.o" \
"CMakeFiles/runMain.dir/tictactoe.c.o"

# External object files for target runMain
runMain_EXTERNAL_OBJECTS =

runMain: CMakeFiles/runMain.dir/programMain.c.o
runMain: CMakeFiles/runMain.dir/tictactoe.c.o
runMain: CMakeFiles/runMain.dir/build.make
runMain: CMakeFiles/runMain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mirandadrummond/CLionProjects/TicTacToe/cmake-build-debug-coverage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable runMain"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runMain.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runMain.dir/build: runMain
.PHONY : CMakeFiles/runMain.dir/build

CMakeFiles/runMain.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runMain.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runMain.dir/clean

CMakeFiles/runMain.dir/depend:
	cd /Users/mirandadrummond/CLionProjects/TicTacToe/cmake-build-debug-coverage && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mirandadrummond/CLionProjects/TicTacToe /Users/mirandadrummond/CLionProjects/TicTacToe /Users/mirandadrummond/CLionProjects/TicTacToe/cmake-build-debug-coverage /Users/mirandadrummond/CLionProjects/TicTacToe/cmake-build-debug-coverage /Users/mirandadrummond/CLionProjects/TicTacToe/cmake-build-debug-coverage/CMakeFiles/runMain.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/runMain.dir/depend

