# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\80520\Documents\GitHub\all_bus\example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\80520\Documents\GitHub\all_bus\build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.c.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.c.obj: CMakeFiles/main.dir/includes_C.rsp
CMakeFiles/main.dir/main.c.obj: C:/Users/80520/Documents/GitHub/all_bus/example/main.c
CMakeFiles/main.dir/main.c.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\80520\Documents\GitHub\all_bus\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/main.c.obj"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/main.c.obj -MF CMakeFiles\main.dir\main.c.obj.d -o CMakeFiles\main.dir\main.c.obj -c C:\Users\80520\Documents\GitHub\all_bus\example\main.c

CMakeFiles/main.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/main.c.i"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\80520\Documents\GitHub\all_bus\example\main.c > CMakeFiles\main.dir\main.c.i

CMakeFiles/main.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/main.c.s"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\80520\Documents\GitHub\all_bus\example\main.c -o CMakeFiles\main.dir\main.c.s

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.obj: CMakeFiles/main.dir/includes_C.rsp
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.obj: C:/Users/80520/Documents/GitHub/all_bus/src/accounter.c
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\80520\Documents\GitHub\all_bus\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.obj"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.obj -MF CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\accounter.c.obj.d -o CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\accounter.c.obj -c C:\Users\80520\Documents\GitHub\all_bus\src\accounter.c

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.i"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\80520\Documents\GitHub\all_bus\src\accounter.c > CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\accounter.c.i

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.s"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\80520\Documents\GitHub\all_bus\src\accounter.c -o CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\accounter.c.s

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.obj: CMakeFiles/main.dir/includes_C.rsp
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.obj: C:/Users/80520/Documents/GitHub/all_bus/src/afifo.c
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\80520\Documents\GitHub\all_bus\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.obj"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.obj -MF CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\afifo.c.obj.d -o CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\afifo.c.obj -c C:\Users\80520\Documents\GitHub\all_bus\src\afifo.c

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.i"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\80520\Documents\GitHub\all_bus\src\afifo.c > CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\afifo.c.i

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.s"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\80520\Documents\GitHub\all_bus\src\afifo.c -o CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\afifo.c.s

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.obj: CMakeFiles/main.dir/includes_C.rsp
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.obj: C:/Users/80520/Documents/GitHub/all_bus/src/bus.c
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\80520\Documents\GitHub\all_bus\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.obj"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.obj -MF CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\bus.c.obj.d -o CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\bus.c.obj -c C:\Users\80520\Documents\GitHub\all_bus\src\bus.c

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.i"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\80520\Documents\GitHub\all_bus\src\bus.c > CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\bus.c.i

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.s"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\80520\Documents\GitHub\all_bus\src\bus.c -o CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\bus.c.s

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.obj: CMakeFiles/main.dir/includes_C.rsp
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.obj: C:/Users/80520/Documents/GitHub/all_bus/src/cvector.c
CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\80520\Documents\GitHub\all_bus\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.obj"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.obj -MF CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\cvector.c.obj.d -o CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\cvector.c.obj -c C:\Users\80520\Documents\GitHub\all_bus\src\cvector.c

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.i"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\80520\Documents\GitHub\all_bus\src\cvector.c > CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\cvector.c.i

CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.s"
	C:\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\80520\Documents\GitHub\all_bus\src\cvector.c -o CMakeFiles\main.dir\C_\Users\80520\Documents\GitHub\all_bus\src\cvector.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.c.obj" \
"CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.obj" \
"CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.obj" \
"CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.obj" \
"CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

main.exe: CMakeFiles/main.dir/main.c.obj
main.exe: CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/accounter.c.obj
main.exe: CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/afifo.c.obj
main.exe: CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/bus.c.obj
main.exe: CMakeFiles/main.dir/C_/Users/80520/Documents/GitHub/all_bus/src/cvector.c.obj
main.exe: CMakeFiles/main.dir/build.make
main.exe: CMakeFiles/main.dir/linkLibs.rsp
main.exe: CMakeFiles/main.dir/objects1.rsp
main.exe: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\80520\Documents\GitHub\all_bus\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main.exe
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\80520\Documents\GitHub\all_bus\example C:\Users\80520\Documents\GitHub\all_bus\example C:\Users\80520\Documents\GitHub\all_bus\build C:\Users\80520\Documents\GitHub\all_bus\build C:\Users\80520\Documents\GitHub\all_bus\build\CMakeFiles\main.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/main.dir/depend
