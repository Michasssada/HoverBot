# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/a/robot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/a/robot/build

# Include any dependencies generated for this target.
include CMakeFiles/robot.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/robot.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/robot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/robot.dir/flags.make

CMakeFiles/robot.dir/src/main.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/main.cpp.o: /home/a/robot/src/main.cpp
CMakeFiles/robot.dir/src/main.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/robot.dir/src/main.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/main.cpp.o -MF CMakeFiles/robot.dir/src/main.cpp.o.d -o CMakeFiles/robot.dir/src/main.cpp.o -c /home/a/robot/src/main.cpp

CMakeFiles/robot.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/main.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/main.cpp > CMakeFiles/robot.dir/src/main.cpp.i

CMakeFiles/robot.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/main.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/main.cpp -o CMakeFiles/robot.dir/src/main.cpp.s

CMakeFiles/robot.dir/src/speak.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/speak.cpp.o: /home/a/robot/src/speak.cpp
CMakeFiles/robot.dir/src/speak.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/robot.dir/src/speak.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/speak.cpp.o -MF CMakeFiles/robot.dir/src/speak.cpp.o.d -o CMakeFiles/robot.dir/src/speak.cpp.o -c /home/a/robot/src/speak.cpp

CMakeFiles/robot.dir/src/speak.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/speak.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/speak.cpp > CMakeFiles/robot.dir/src/speak.cpp.i

CMakeFiles/robot.dir/src/speak.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/speak.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/speak.cpp -o CMakeFiles/robot.dir/src/speak.cpp.s

CMakeFiles/robot.dir/src/log.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/log.cpp.o: /home/a/robot/src/log.cpp
CMakeFiles/robot.dir/src/log.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/robot.dir/src/log.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/log.cpp.o -MF CMakeFiles/robot.dir/src/log.cpp.o.d -o CMakeFiles/robot.dir/src/log.cpp.o -c /home/a/robot/src/log.cpp

CMakeFiles/robot.dir/src/log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/log.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/log.cpp > CMakeFiles/robot.dir/src/log.cpp.i

CMakeFiles/robot.dir/src/log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/log.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/log.cpp -o CMakeFiles/robot.dir/src/log.cpp.s

CMakeFiles/robot.dir/src/movement/Servo.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/movement/Servo.cpp.o: /home/a/robot/src/movement/Servo.cpp
CMakeFiles/robot.dir/src/movement/Servo.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/robot.dir/src/movement/Servo.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/movement/Servo.cpp.o -MF CMakeFiles/robot.dir/src/movement/Servo.cpp.o.d -o CMakeFiles/robot.dir/src/movement/Servo.cpp.o -c /home/a/robot/src/movement/Servo.cpp

CMakeFiles/robot.dir/src/movement/Servo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/movement/Servo.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/movement/Servo.cpp > CMakeFiles/robot.dir/src/movement/Servo.cpp.i

CMakeFiles/robot.dir/src/movement/Servo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/movement/Servo.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/movement/Servo.cpp -o CMakeFiles/robot.dir/src/movement/Servo.cpp.s

CMakeFiles/robot.dir/src/read_cfg.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/read_cfg.cpp.o: /home/a/robot/src/read_cfg.cpp
CMakeFiles/robot.dir/src/read_cfg.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/robot.dir/src/read_cfg.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/read_cfg.cpp.o -MF CMakeFiles/robot.dir/src/read_cfg.cpp.o.d -o CMakeFiles/robot.dir/src/read_cfg.cpp.o -c /home/a/robot/src/read_cfg.cpp

CMakeFiles/robot.dir/src/read_cfg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/read_cfg.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/read_cfg.cpp > CMakeFiles/robot.dir/src/read_cfg.cpp.i

CMakeFiles/robot.dir/src/read_cfg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/read_cfg.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/read_cfg.cpp -o CMakeFiles/robot.dir/src/read_cfg.cpp.s

CMakeFiles/robot.dir/src/gyro.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/gyro.cpp.o: /home/a/robot/src/gyro.cpp
CMakeFiles/robot.dir/src/gyro.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/robot.dir/src/gyro.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/gyro.cpp.o -MF CMakeFiles/robot.dir/src/gyro.cpp.o.d -o CMakeFiles/robot.dir/src/gyro.cpp.o -c /home/a/robot/src/gyro.cpp

CMakeFiles/robot.dir/src/gyro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/gyro.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/gyro.cpp > CMakeFiles/robot.dir/src/gyro.cpp.i

CMakeFiles/robot.dir/src/gyro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/gyro.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/gyro.cpp -o CMakeFiles/robot.dir/src/gyro.cpp.s

CMakeFiles/robot.dir/src/SSD1306.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/SSD1306.cpp.o: /home/a/robot/src/SSD1306.cpp
CMakeFiles/robot.dir/src/SSD1306.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/robot.dir/src/SSD1306.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/SSD1306.cpp.o -MF CMakeFiles/robot.dir/src/SSD1306.cpp.o.d -o CMakeFiles/robot.dir/src/SSD1306.cpp.o -c /home/a/robot/src/SSD1306.cpp

CMakeFiles/robot.dir/src/SSD1306.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/SSD1306.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/SSD1306.cpp > CMakeFiles/robot.dir/src/SSD1306.cpp.i

CMakeFiles/robot.dir/src/SSD1306.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/SSD1306.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/SSD1306.cpp -o CMakeFiles/robot.dir/src/SSD1306.cpp.s

CMakeFiles/robot.dir/src/movement/engines.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/movement/engines.cpp.o: /home/a/robot/src/movement/engines.cpp
CMakeFiles/robot.dir/src/movement/engines.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/robot.dir/src/movement/engines.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/movement/engines.cpp.o -MF CMakeFiles/robot.dir/src/movement/engines.cpp.o.d -o CMakeFiles/robot.dir/src/movement/engines.cpp.o -c /home/a/robot/src/movement/engines.cpp

CMakeFiles/robot.dir/src/movement/engines.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/movement/engines.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/movement/engines.cpp > CMakeFiles/robot.dir/src/movement/engines.cpp.i

CMakeFiles/robot.dir/src/movement/engines.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/movement/engines.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/movement/engines.cpp -o CMakeFiles/robot.dir/src/movement/engines.cpp.s

CMakeFiles/robot.dir/src/Stabilizer.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/src/Stabilizer.cpp.o: /home/a/robot/src/Stabilizer.cpp
CMakeFiles/robot.dir/src/Stabilizer.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/robot.dir/src/Stabilizer.cpp.o"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/src/Stabilizer.cpp.o -MF CMakeFiles/robot.dir/src/Stabilizer.cpp.o.d -o CMakeFiles/robot.dir/src/Stabilizer.cpp.o -c /home/a/robot/src/Stabilizer.cpp

CMakeFiles/robot.dir/src/Stabilizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/src/Stabilizer.cpp.i"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/a/robot/src/Stabilizer.cpp > CMakeFiles/robot.dir/src/Stabilizer.cpp.i

CMakeFiles/robot.dir/src/Stabilizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/src/Stabilizer.cpp.s"
	/usr/bin/aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/a/robot/src/Stabilizer.cpp -o CMakeFiles/robot.dir/src/Stabilizer.cpp.s

# Object files for target robot
robot_OBJECTS = \
"CMakeFiles/robot.dir/src/main.cpp.o" \
"CMakeFiles/robot.dir/src/speak.cpp.o" \
"CMakeFiles/robot.dir/src/log.cpp.o" \
"CMakeFiles/robot.dir/src/movement/Servo.cpp.o" \
"CMakeFiles/robot.dir/src/read_cfg.cpp.o" \
"CMakeFiles/robot.dir/src/gyro.cpp.o" \
"CMakeFiles/robot.dir/src/SSD1306.cpp.o" \
"CMakeFiles/robot.dir/src/movement/engines.cpp.o" \
"CMakeFiles/robot.dir/src/Stabilizer.cpp.o"

# External object files for target robot
robot_EXTERNAL_OBJECTS =

robot: CMakeFiles/robot.dir/src/main.cpp.o
robot: CMakeFiles/robot.dir/src/speak.cpp.o
robot: CMakeFiles/robot.dir/src/log.cpp.o
robot: CMakeFiles/robot.dir/src/movement/Servo.cpp.o
robot: CMakeFiles/robot.dir/src/read_cfg.cpp.o
robot: CMakeFiles/robot.dir/src/gyro.cpp.o
robot: CMakeFiles/robot.dir/src/SSD1306.cpp.o
robot: CMakeFiles/robot.dir/src/movement/engines.cpp.o
robot: CMakeFiles/robot.dir/src/Stabilizer.cpp.o
robot: CMakeFiles/robot.dir/build.make
robot: CMakeFiles/robot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/a/robot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable robot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/robot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/robot.dir/build: robot
.PHONY : CMakeFiles/robot.dir/build

CMakeFiles/robot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/robot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/robot.dir/clean

CMakeFiles/robot.dir/depend:
	cd /home/a/robot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/a/robot /home/a/robot /home/a/robot/build /home/a/robot/build /home/a/robot/build/CMakeFiles/robot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/robot.dir/depend

