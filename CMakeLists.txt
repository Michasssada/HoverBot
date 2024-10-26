cmake_minimum_required(VERSION 3.10)

project(robot)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for your custom SSD1306 implementation
include_directories(include)

set(SOURCES
    src/main.cpp
    src/speak.cpp
    src/log.cpp
    src/movement/Servo.cpp
    src/read_cfg.cpp
    src/sensors/gyro.cpp
    src/SSD1306.cpp
    src/movement/engines.cpp
    src/Stabilizer.cpp

    # Add other source files here
)

# Link the bcm2835 library
add_executable(robot ${SOURCES})
target_link_libraries(robot wiringPi)
