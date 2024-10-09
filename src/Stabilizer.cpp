#include "Stabilizer.h"

// Constructor to initialize the stabilizer with engines and gyro
Stabilizer::Stabilizer(Engines& leftEngine, Engines& rightEngine, MPU6050& gyro)
    : leftEngine(leftEngine), rightEngine(rightEngine), gyro(gyro), previous_error_pitch(0), previous_error_roll(0), integral_pitch(0), integral_roll(0) {
    // Default PID constants
    Kp = 1.0;
    Ki = 0.1;
    Kd = 0.05;
}

void Stabilizer::setPIDConstants(float Kp, float Ki, float Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
}

// Function to calculate PID values
float Stabilizer::calculatePID(float target, float current, float& previous_error, float& integral) {
    float error = target - current;
    integral += error;
    float derivative = error - previous_error;
    previous_error = error;
    return Kp * error + Ki * integral + Kd * derivative;
}

// Stabilization function
void Stabilizer::stabilize() {
    // Get current tilt angles from the gyro
    float pitch = gyro.getPitch();
    float roll = gyro.getRoll();
    
    // Target pitch and roll are both zero for balance
    float pitchCorrection = calculatePID(0, pitch, previous_error_pitch, integral_pitch);
    float rollCorrection = calculatePID(0, roll, previous_error_roll, integral_roll);
    
    // Adjust motor speeds based on the tilt
    int leftSpeed = 50 + abs(pitchCorrection) - rollCorrection;  // Base speed is 50
    int rightSpeed = 50 + abs(pitchCorrection) + rollCorrection;

    // Constrain the speed to 0-100 range
    leftSpeed = std::min(std::max(leftSpeed, 0), 100);
    rightSpeed = std::min(std::max(rightSpeed, 0), 100);
    
    // Update motor speeds and directions
    leftEngine.engine_write(leftSpeed, pitchCorrection < 0);  // Forward if tilted backward
    rightEngine.engine_write(rightSpeed, pitchCorrection < 0); // Forward if tilted backward
}

// Move forward
void Stabilizer::forward(int speed) {
    leftEngine.engine_write(speed, false);  // Move forward
    rightEngine.engine_write(speed, false); // Move forward
}

// Move backward
void Stabilizer::backward(int speed) {
    leftEngine.engine_write(speed, true);   // Move backward
    rightEngine.engine_write(speed, true);  // Move backward
}

// Rotate left
void Stabilizer::left_rotation(int speed) {
    leftEngine.engine_write(speed, true);   // Left motor backward
    rightEngine.engine_write(speed, false);  // Right motor forward
}

// Rotate right
void Stabilizer::right_rotation(int speed) {
    leftEngine.engine_write(speed, false);  // Left motor forward
    rightEngine.engine_write(speed, true);   // Right motor backward
}

// Stop
void Stabilizer::stop() {
    leftEngine.stop();  // Stop the left engine
    rightEngine.stop(); // Stop the right engine
}