# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build

# Include any dependencies generated for this target.
include 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/compiler_depend.make

# Include the progress variables for this target.
include 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/progress.make

# Include the compile flags for this target's objects.
include 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/flags.make

1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o: 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/flags.make
1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o: 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/includes_CXX.rsp
1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o: ../1_Array_Construction/app/main.cc
1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o: 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o"
	cd C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app && C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o -MF CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o.d -o CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o -c C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/1_Array_Construction/app/main.cc

1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_Array_Construction_Executable.dir/main.cc.i"
	cd C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app && C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/1_Array_Construction/app/main.cc > CMakeFiles/1_Array_Construction_Executable.dir/main.cc.i

1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_Array_Construction_Executable.dir/main.cc.s"
	cd C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app && C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/1_Array_Construction/app/main.cc -o CMakeFiles/1_Array_Construction_Executable.dir/main.cc.s

# Object files for target 1_Array_Construction_Executable
1_Array_Construction_Executable_OBJECTS = \
"CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o"

# External object files for target 1_Array_Construction_Executable
1_Array_Construction_Executable_EXTERNAL_OBJECTS = \
"C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/src/CMakeFiles/1_Array_Construction_MyLib.dir/my_lib.cc.o"

1_Array_Construction/app/1_Array_Construction_Executable.exe: 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/main.cc.o
1_Array_Construction/app/1_Array_Construction_Executable.exe: 1_Array_Construction/src/CMakeFiles/1_Array_Construction_MyLib.dir/my_lib.cc.o
1_Array_Construction/app/1_Array_Construction_Executable.exe: 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/build.make
1_Array_Construction/app/1_Array_Construction_Executable.exe: 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1_Array_Construction_Executable.exe"
	cd C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app && "C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/1_Array_Construction_Executable.dir/objects.a
	cd C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app && C:/cygwin64/bin/ar.exe cr CMakeFiles/1_Array_Construction_Executable.dir/objects.a @CMakeFiles/1_Array_Construction_Executable.dir/objects1.rsp
	cd C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app && C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe -g -Wl,--whole-archive CMakeFiles/1_Array_Construction_Executable.dir/objects.a -Wl,--no-whole-archive -o 1_Array_Construction_Executable.exe -Wl,--out-implib,lib1_Array_Construction_Executable.dll.a -Wl,--major-image-version,0,--minor-image-version,0 

# Rule to build all files generated by this target.
1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/build: 1_Array_Construction/app/1_Array_Construction_Executable.exe
.PHONY : 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/build

1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/clean:
	cd C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app && $(CMAKE_COMMAND) -P CMakeFiles/1_Array_Construction_Executable.dir/cmake_clean.cmake
.PHONY : 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/clean

1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/1_Array_Construction/app C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app C:/Users/eywiotosof/Documents/GitHub/SmallConstructionsInCpp/build/1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 1_Array_Construction/app/CMakeFiles/1_Array_Construction_Executable.dir/depend
