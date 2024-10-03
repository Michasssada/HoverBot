#include "gyro.h"

// Constructor: Initialize I2C communication with MPU6050
MPU6050::MPU6050() {
    fd = wiringPiI2CSetup(MPU6050_ADDR);
    if (fd == -1) {
        std::cerr << "Failed to initialize I2C communication." << std::endl;
        exit(-1);
    }
    wiringPiI2CWriteReg8(fd, PWR_MGMT_1, 0);  // Wake up MPU6050
}

// Read 16-bit data from a specific MPU6050 register
int MPU6050::read_word_2c(int addr) {
    int high = wiringPiI2CReadReg8(fd, addr);
    int low = wiringPiI2CReadReg8(fd, addr + 1);
    int val = (high << 8) + low;
    if (val >= 0x8000) val = -(65536 - val);
    return val;
}

// Accelerometer functions
float MPU6050::getAccelX() {
    return read_word_2c(ACCEL_XOUT_H) / 16384.0;  // ±2g range
}

float MPU6050::getAccelY() {
    return read_word_2c(ACCEL_XOUT_H + 2) / 16384.0;
}

float MPU6050::getAccelZ() {
    return read_word_2c(ACCEL_XOUT_H + 4) / 16384.0;
}

// Gyroscope functions
float MPU6050::getGyroX() {
    return read_word_2c(GYRO_XOUT_H) / 131.0;  // ±250°/s range
}

float MPU6050::getGyroY() {
    return read_word_2c(GYRO_XOUT_H + 2) / 131.0;
}

float MPU6050::getGyroZ() {
    return read_word_2c(GYRO_XOUT_H + 4) / 131.0;
}

// Calculate pitch (degrees)
float MPU6050::getPitch() {
    return atan2(getAccelY(), sqrt(getAccelX() * getAccelX() + getAccelZ() * getAccelZ())) * 180.0 / M_PI;
}

// Calculate roll (degrees)
float MPU6050::getRoll() {
    return atan2(getAccelX(), sqrt(getAccelY() * getAccelY() + getAccelZ() * getAccelZ())) * 180.0 / M_PI;
}
