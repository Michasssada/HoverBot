#ifndef GYRO_H
#define GYRO_H

#include <wiringPiI2C.h>
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <time.h>
// MPU6050 Registers
#define Device_Address 0x68	/*Device Address/Identifier for MPU6050*/

#define PWR_MGMT_1   0x6B
#define SMPLRT_DIV   0x19
#define CONFIG       0x1A
#define GYRO_CONFIG  0x1B
#define INT_ENABLE   0x38
#define ACCEL_XOUT_H 0x3B
#define ACCEL_YOUT_H 0x3D
#define ACCEL_ZOUT_H 0x3F
#define GYRO_XOUT_H  0x43
#define GYRO_YOUT_H  0x45
#define GYRO_ZOUT_H  0x47
#include <chrono>

// MPU6050 class to encapsulate sensor data handling
class MPU6050 {
public:
    MPU6050();  // Constructor to initialize MPU6050
    float read_raw_X();
    float read_raw_Y();
    float read_raw_Z();
    float read_gaccel_X();
    float read_gaccel_Y();
    float read_gaccel_Z();
    float read_accel_raw_X();
    float read_accel_raw_Y();
    float read_accel_raw_Z();
    float read_accel_X();
    float read_accel_Y();
    float read_accel_Z();
    float pitch();
    float roll();
private:
    int fd;  // File descriptor for I2C communication
    int read_word_2c(int addr);  // Helper to read 16-bit values from I2C
    float read(int addr);
    float gyroToDegrees(float angularVelocity);
    float convertAccel(int16_t raw_value);
    void calculateAccelTilt(float accX, float accY, float accZ, float &roll, float &pitch);
};

#endif  // GYRO_H
