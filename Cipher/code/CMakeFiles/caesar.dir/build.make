# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code

# Include any dependencies generated for this target.
include CMakeFiles/caesar.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/caesar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/caesar.dir/flags.make

CMakeFiles/caesar.dir/caesar.c.o: CMakeFiles/caesar.dir/flags.make
CMakeFiles/caesar.dir/caesar.c.o: caesar.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/caesar.dir/caesar.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/caesar.dir/caesar.c.o   -c /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/caesar.c

CMakeFiles/caesar.dir/caesar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/caesar.dir/caesar.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/caesar.c > CMakeFiles/caesar.dir/caesar.c.i

CMakeFiles/caesar.dir/caesar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/caesar.dir/caesar.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/caesar.c -o CMakeFiles/caesar.dir/caesar.c.s

CMakeFiles/caesar.dir/caesar.c.o.requires:

.PHONY : CMakeFiles/caesar.dir/caesar.c.o.requires

CMakeFiles/caesar.dir/caesar.c.o.provides: CMakeFiles/caesar.dir/caesar.c.o.requires
	$(MAKE) -f CMakeFiles/caesar.dir/build.make CMakeFiles/caesar.dir/caesar.c.o.provides.build
.PHONY : CMakeFiles/caesar.dir/caesar.c.o.provides

CMakeFiles/caesar.dir/caesar.c.o.provides.build: CMakeFiles/caesar.dir/caesar.c.o


CMakeFiles/caesar.dir/cipher.c.o: CMakeFiles/caesar.dir/flags.make
CMakeFiles/caesar.dir/cipher.c.o: cipher.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/caesar.dir/cipher.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/caesar.dir/cipher.c.o   -c /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/cipher.c

CMakeFiles/caesar.dir/cipher.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/caesar.dir/cipher.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/cipher.c > CMakeFiles/caesar.dir/cipher.c.i

CMakeFiles/caesar.dir/cipher.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/caesar.dir/cipher.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/cipher.c -o CMakeFiles/caesar.dir/cipher.c.s

CMakeFiles/caesar.dir/cipher.c.o.requires:

.PHONY : CMakeFiles/caesar.dir/cipher.c.o.requires

CMakeFiles/caesar.dir/cipher.c.o.provides: CMakeFiles/caesar.dir/cipher.c.o.requires
	$(MAKE) -f CMakeFiles/caesar.dir/build.make CMakeFiles/caesar.dir/cipher.c.o.provides.build
.PHONY : CMakeFiles/caesar.dir/cipher.c.o.provides

CMakeFiles/caesar.dir/cipher.c.o.provides.build: CMakeFiles/caesar.dir/cipher.c.o


CMakeFiles/caesar.dir/linkedlist.c.o: CMakeFiles/caesar.dir/flags.make
CMakeFiles/caesar.dir/linkedlist.c.o: linkedlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/caesar.dir/linkedlist.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/caesar.dir/linkedlist.c.o   -c /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/linkedlist.c

CMakeFiles/caesar.dir/linkedlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/caesar.dir/linkedlist.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/linkedlist.c > CMakeFiles/caesar.dir/linkedlist.c.i

CMakeFiles/caesar.dir/linkedlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/caesar.dir/linkedlist.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/linkedlist.c -o CMakeFiles/caesar.dir/linkedlist.c.s

CMakeFiles/caesar.dir/linkedlist.c.o.requires:

.PHONY : CMakeFiles/caesar.dir/linkedlist.c.o.requires

CMakeFiles/caesar.dir/linkedlist.c.o.provides: CMakeFiles/caesar.dir/linkedlist.c.o.requires
	$(MAKE) -f CMakeFiles/caesar.dir/build.make CMakeFiles/caesar.dir/linkedlist.c.o.provides.build
.PHONY : CMakeFiles/caesar.dir/linkedlist.c.o.provides

CMakeFiles/caesar.dir/linkedlist.c.o.provides.build: CMakeFiles/caesar.dir/linkedlist.c.o


CMakeFiles/caesar.dir/read_file.c.o: CMakeFiles/caesar.dir/flags.make
CMakeFiles/caesar.dir/read_file.c.o: read_file.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/caesar.dir/read_file.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/caesar.dir/read_file.c.o   -c /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/read_file.c

CMakeFiles/caesar.dir/read_file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/caesar.dir/read_file.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/read_file.c > CMakeFiles/caesar.dir/read_file.c.i

CMakeFiles/caesar.dir/read_file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/caesar.dir/read_file.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/read_file.c -o CMakeFiles/caesar.dir/read_file.c.s

CMakeFiles/caesar.dir/read_file.c.o.requires:

.PHONY : CMakeFiles/caesar.dir/read_file.c.o.requires

CMakeFiles/caesar.dir/read_file.c.o.provides: CMakeFiles/caesar.dir/read_file.c.o.requires
	$(MAKE) -f CMakeFiles/caesar.dir/build.make CMakeFiles/caesar.dir/read_file.c.o.provides.build
.PHONY : CMakeFiles/caesar.dir/read_file.c.o.provides

CMakeFiles/caesar.dir/read_file.c.o.provides.build: CMakeFiles/caesar.dir/read_file.c.o


CMakeFiles/caesar.dir/write_file.c.o: CMakeFiles/caesar.dir/flags.make
CMakeFiles/caesar.dir/write_file.c.o: write_file.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/caesar.dir/write_file.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/caesar.dir/write_file.c.o   -c /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/write_file.c

CMakeFiles/caesar.dir/write_file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/caesar.dir/write_file.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/write_file.c > CMakeFiles/caesar.dir/write_file.c.i

CMakeFiles/caesar.dir/write_file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/caesar.dir/write_file.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/write_file.c -o CMakeFiles/caesar.dir/write_file.c.s

CMakeFiles/caesar.dir/write_file.c.o.requires:

.PHONY : CMakeFiles/caesar.dir/write_file.c.o.requires

CMakeFiles/caesar.dir/write_file.c.o.provides: CMakeFiles/caesar.dir/write_file.c.o.requires
	$(MAKE) -f CMakeFiles/caesar.dir/build.make CMakeFiles/caesar.dir/write_file.c.o.provides.build
.PHONY : CMakeFiles/caesar.dir/write_file.c.o.provides

CMakeFiles/caesar.dir/write_file.c.o.provides.build: CMakeFiles/caesar.dir/write_file.c.o


# Object files for target caesar
caesar_OBJECTS = \
"CMakeFiles/caesar.dir/caesar.c.o" \
"CMakeFiles/caesar.dir/cipher.c.o" \
"CMakeFiles/caesar.dir/linkedlist.c.o" \
"CMakeFiles/caesar.dir/read_file.c.o" \
"CMakeFiles/caesar.dir/write_file.c.o"

# External object files for target caesar
caesar_EXTERNAL_OBJECTS =

caesar: CMakeFiles/caesar.dir/caesar.c.o
caesar: CMakeFiles/caesar.dir/cipher.c.o
caesar: CMakeFiles/caesar.dir/linkedlist.c.o
caesar: CMakeFiles/caesar.dir/read_file.c.o
caesar: CMakeFiles/caesar.dir/write_file.c.o
caesar: CMakeFiles/caesar.dir/build.make
caesar: CMakeFiles/caesar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable caesar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/caesar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/caesar.dir/build: caesar

.PHONY : CMakeFiles/caesar.dir/build

CMakeFiles/caesar.dir/requires: CMakeFiles/caesar.dir/caesar.c.o.requires
CMakeFiles/caesar.dir/requires: CMakeFiles/caesar.dir/cipher.c.o.requires
CMakeFiles/caesar.dir/requires: CMakeFiles/caesar.dir/linkedlist.c.o.requires
CMakeFiles/caesar.dir/requires: CMakeFiles/caesar.dir/read_file.c.o.requires
CMakeFiles/caesar.dir/requires: CMakeFiles/caesar.dir/write_file.c.o.requires

.PHONY : CMakeFiles/caesar.dir/requires

CMakeFiles/caesar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/caesar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/caesar.dir/clean

CMakeFiles/caesar.dir/depend:
	cd /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code /home/runner/Assignment-5-viciiiz/COMP-410_Operating_Systems/Cipher/code/CMakeFiles/caesar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/caesar.dir/depend

