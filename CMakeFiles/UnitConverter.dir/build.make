# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bugra/Documents/projeler/UnitConverter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bugra/Documents/projeler/build-UnitConverter-Desktop-Release

# Include any dependencies generated for this target.
include CMakeFiles/UnitConverter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/UnitConverter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/UnitConverter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UnitConverter.dir/flags.make

CMakeFiles/UnitConverter.dir/main.c.o: CMakeFiles/UnitConverter.dir/flags.make
CMakeFiles/UnitConverter.dir/main.c.o: /home/bugra/Documents/projeler/UnitConverter/main.c
CMakeFiles/UnitConverter.dir/main.c.o: CMakeFiles/UnitConverter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bugra/Documents/projeler/build-UnitConverter-Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/UnitConverter.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/UnitConverter.dir/main.c.o -MF CMakeFiles/UnitConverter.dir/main.c.o.d -o CMakeFiles/UnitConverter.dir/main.c.o -c /home/bugra/Documents/projeler/UnitConverter/main.c

CMakeFiles/UnitConverter.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/UnitConverter.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bugra/Documents/projeler/UnitConverter/main.c > CMakeFiles/UnitConverter.dir/main.c.i

CMakeFiles/UnitConverter.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/UnitConverter.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bugra/Documents/projeler/UnitConverter/main.c -o CMakeFiles/UnitConverter.dir/main.c.s

CMakeFiles/UnitConverter.dir/yeni.c.o: CMakeFiles/UnitConverter.dir/flags.make
CMakeFiles/UnitConverter.dir/yeni.c.o: /home/bugra/Documents/projeler/UnitConverter/yeni.c
CMakeFiles/UnitConverter.dir/yeni.c.o: CMakeFiles/UnitConverter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bugra/Documents/projeler/build-UnitConverter-Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/UnitConverter.dir/yeni.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/UnitConverter.dir/yeni.c.o -MF CMakeFiles/UnitConverter.dir/yeni.c.o.d -o CMakeFiles/UnitConverter.dir/yeni.c.o -c /home/bugra/Documents/projeler/UnitConverter/yeni.c

CMakeFiles/UnitConverter.dir/yeni.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/UnitConverter.dir/yeni.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bugra/Documents/projeler/UnitConverter/yeni.c > CMakeFiles/UnitConverter.dir/yeni.c.i

CMakeFiles/UnitConverter.dir/yeni.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/UnitConverter.dir/yeni.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bugra/Documents/projeler/UnitConverter/yeni.c -o CMakeFiles/UnitConverter.dir/yeni.c.s

# Object files for target UnitConverter
UnitConverter_OBJECTS = \
"CMakeFiles/UnitConverter.dir/main.c.o" \
"CMakeFiles/UnitConverter.dir/yeni.c.o"

# External object files for target UnitConverter
UnitConverter_EXTERNAL_OBJECTS =

UnitConverter: CMakeFiles/UnitConverter.dir/main.c.o
UnitConverter: CMakeFiles/UnitConverter.dir/yeni.c.o
UnitConverter: CMakeFiles/UnitConverter.dir/build.make
UnitConverter: CMakeFiles/UnitConverter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bugra/Documents/projeler/build-UnitConverter-Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable UnitConverter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UnitConverter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UnitConverter.dir/build: UnitConverter
.PHONY : CMakeFiles/UnitConverter.dir/build

CMakeFiles/UnitConverter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UnitConverter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UnitConverter.dir/clean

CMakeFiles/UnitConverter.dir/depend:
	cd /home/bugra/Documents/projeler/build-UnitConverter-Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bugra/Documents/projeler/UnitConverter /home/bugra/Documents/projeler/UnitConverter /home/bugra/Documents/projeler/build-UnitConverter-Desktop-Release /home/bugra/Documents/projeler/build-UnitConverter-Desktop-Release /home/bugra/Documents/projeler/build-UnitConverter-Desktop-Release/CMakeFiles/UnitConverter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UnitConverter.dir/depend
