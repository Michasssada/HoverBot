#ifndef GYRO_H
#define GYRO_H

#include <wiringPiI2C.h>
#include <iostream>
#include <cmath>

// MPU6050 Registers
#define MPU6050_ADDR 0x68
#define PWR_MGMT_1 0x6B
#define ACCEL_XOUT_H 0x3B
#define GYRO_XOUT_H 0x43

// MPU6050 class to encapsulate sensor data handling
class MPU6050 {
public:
    MPU6050();  // Constructor to initialize MPU6050
    float getAccelX();  // Get accelerometer X-axis (g)
    float getAccelY();  // Get accelerometer Y-axis (g)
    float getAccelZ();  // Get accelerometer Z-axis (g)
    float getGyroX();   // Get gyroscope X-axis (degrees/sec)
    float getGyroY();   // Get gyroscope Y-axis (degrees/sec)
    float getGyroZ();   // Get gyroscope Z-axis (degrees/sec)
    float getPitch();   // Calculate pitch angle
    float getRoll();    // Calculate roll angle

private:
    int fd;  // File descriptor for I2C communication
    int read_word_2c(int addr);  // Helper to read 16-bit values from I2C
};

#endif  // GYRO_H
