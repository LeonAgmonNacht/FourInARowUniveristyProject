# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/daniel/Documents/GitHub/FourInARowUniveristyProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FourInARowUniveristyProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FourInARowUniveristyProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FourInARowUniveristyProject.dir/flags.make

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o: CMakeFiles/FourInARowUniveristyProject.dir/flags.make
CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o: ../SPArrayList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o   -c /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPArrayList.c

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPArrayList.c > CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.i

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPArrayList.c -o CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.s

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o.requires:

.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o.requires

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o.provides: CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o.requires
	$(MAKE) -f CMakeFiles/FourInARowUniveristyProject.dir/build.make CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o.provides.build
.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o.provides

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o.provides.build: CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o


CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o: CMakeFiles/FourInARowUniveristyProject.dir/flags.make
CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o: ../SPArrayListUnitTest.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o   -c /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPArrayListUnitTest.c

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPArrayListUnitTest.c > CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.i

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPArrayListUnitTest.c -o CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.s

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o.requires:

.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o.requires

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o.provides: CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o.requires
	$(MAKE) -f CMakeFiles/FourInARowUniveristyProject.dir/build.make CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o.provides.build
.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o.provides

CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o.provides.build: CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o


CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o: CMakeFiles/FourInARowUniveristyProject.dir/flags.make
CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o: ../SPFIARGameUnitTest.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o   -c /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARGameUnitTest.c

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARGameUnitTest.c > CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.i

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARGameUnitTest.c -o CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.s

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o.requires:

.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o.requires

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o.provides: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o.requires
	$(MAKE) -f CMakeFiles/FourInARowUniveristyProject.dir/build.make CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o.provides.build
.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o.provides

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o.provides.build: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o


CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o: CMakeFiles/FourInARowUniveristyProject.dir/flags.make
CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o: ../SPFIARParser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o   -c /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARParser.c

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARParser.c > CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.i

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARParser.c -o CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.s

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o.requires:

.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o.requires

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o.provides: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o.requires
	$(MAKE) -f CMakeFiles/FourInARowUniveristyProject.dir/build.make CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o.provides.build
.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o.provides

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o.provides.build: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o


CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o: CMakeFiles/FourInARowUniveristyProject.dir/flags.make
CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o: ../SPFIARParserUnitTest.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o   -c /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARParserUnitTest.c

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARParserUnitTest.c > CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.i

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/SPFIARParserUnitTest.c -o CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.s

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o.requires:

.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o.requires

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o.provides: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o.requires
	$(MAKE) -f CMakeFiles/FourInARowUniveristyProject.dir/build.make CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o.provides.build
.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o.provides

CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o.provides.build: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o


# Object files for target FourInARowUniveristyProject
FourInARowUniveristyProject_OBJECTS = \
"CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o" \
"CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o" \
"CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o" \
"CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o" \
"CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o"

# External object files for target FourInARowUniveristyProject
FourInARowUniveristyProject_EXTERNAL_OBJECTS =

FourInARowUniveristyProject: CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o
FourInARowUniveristyProject: CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o
FourInARowUniveristyProject: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o
FourInARowUniveristyProject: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o
FourInARowUniveristyProject: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o
FourInARowUniveristyProject: CMakeFiles/FourInARowUniveristyProject.dir/build.make
FourInARowUniveristyProject: CMakeFiles/FourInARowUniveristyProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable FourInARowUniveristyProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FourInARowUniveristyProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FourInARowUniveristyProject.dir/build: FourInARowUniveristyProject

.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/build

CMakeFiles/FourInARowUniveristyProject.dir/requires: CMakeFiles/FourInARowUniveristyProject.dir/SPArrayList.c.o.requires
CMakeFiles/FourInARowUniveristyProject.dir/requires: CMakeFiles/FourInARowUniveristyProject.dir/SPArrayListUnitTest.c.o.requires
CMakeFiles/FourInARowUniveristyProject.dir/requires: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARGameUnitTest.c.o.requires
CMakeFiles/FourInARowUniveristyProject.dir/requires: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParser.c.o.requires
CMakeFiles/FourInARowUniveristyProject.dir/requires: CMakeFiles/FourInARowUniveristyProject.dir/SPFIARParserUnitTest.c.o.requires

.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/requires

CMakeFiles/FourInARowUniveristyProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FourInARowUniveristyProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/clean

CMakeFiles/FourInARowUniveristyProject.dir/depend:
	cd /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/daniel/Documents/GitHub/FourInARowUniveristyProject /Users/daniel/Documents/GitHub/FourInARowUniveristyProject /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug /Users/daniel/Documents/GitHub/FourInARowUniveristyProject/cmake-build-debug/CMakeFiles/FourInARowUniveristyProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FourInARowUniveristyProject.dir/depend

