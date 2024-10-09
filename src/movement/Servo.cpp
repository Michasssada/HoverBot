// ServoControl.cpp
#include "movement/Servo.h"
#include <iostream>

// Constructor
ServoControl::ServoControl(int gpioPin) : pin(gpioPin) {
    if (wiringPiSetupGpio() == -1) {
        std::cerr << "Failed to initialize WiringPi" << std::endl;
        throw std::runtime_error("WiringPi initialization failed");
    }
    // Initialize software PWM on the pin, range 0-200 (for a 20ms period)
    softPwmCreate(pin, 0, 200);
}

// Destructor
ServoControl::~ServoControl() {
    softPwmWrite(pin, 0);  // Turn off the servo
}

// Set the servo angle (0 to 180 degrees)
void ServoControl::setAngle(int angle) {
    if (angle < 0) angle = 0;
    if (angle > 180) angle = 180;

    int dutyCycle = mapAngleToDutyCycle(angle);
    softPwmWrite(pin, dutyCycle);
}

// Map the angle (0-180 degrees) to the PWM duty cycle
int ServoControl::mapAngleToDutyCycle(int angle) {
    // Assuming 1ms corresponds to 0 degrees and 2ms to 180 degrees:
    return 5 + (angle * 20) / 180;
}
