#ifndef STABILIZER_H
#define STABILIZER_H

#include "movement/engines.h"
#include "gyro.h"

class Stabilizer {
public:
    Stabilizer(Engines& leftEngine, Engines& rightEngine, MPU6050& gyro);
    void setPIDConstants(float Kp, float Ki, float Kd);
    void stabilize();
    void forward(int speed);
    void backward(int speed);
    void left_rotation(int speed);
    void right_rotation(int speed);
    void stop();

private:
    Engines& leftEngine;
    Engines& rightEngine;
    MPU6050& gyro;

    float Kp, Ki, Kd;
    float previous_error_pitch;
    float previous_error_roll;
    float integral_pitch;
    float integral_roll;

    float calculatePID(float target, float current, float& previous_error, float& integral);
};

#endif
