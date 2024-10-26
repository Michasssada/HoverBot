#ifndef PID_H
#define PID_H

#include <cmath>  // For fabs function

class PID {
public:
    PID(float p, float i, float d);

    // Compute the PID output, update direction via pointer, return speed
    float compute(float currentAngle, float deltaTime, bool* moveBackward);

private:
    float kp, ki, kd;      // PID constants
    float setPoint;        // Desired angle (e.g., 0 degrees for balance)
    float integral, lastError;
};

#endif // PID_H
