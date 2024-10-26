#include "PID.h"

// Constructor to initialize PID constants
PID::PID(float p, float i, float d) {
    kp = p;
    ki = i;
    kd = d;
    setPoint = 0.0;
    integral = 0.0;
    lastError = 0.0;
}

// Compute the PID output, update direction via pointer, return speed
float PID::compute(float currentAngle, float deltaTime, bool* moveBackward) {
    float error = setPoint - currentAngle;
    integral += error * deltaTime;
    float derivative = (error - lastError) / deltaTime;
    lastError = error;

    // PID output
    float output = (kp * error) + (ki * integral) + (kd * derivative);

    // Set direction based on the sign of the output
    *moveBackward = output < 0.0;

    // Speed is the absolute value of the output
    float speed = fabs(output);

    return speed;
}
