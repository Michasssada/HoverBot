#include "gyro.h"
int fd;

// Constructor: Initialize I2C communication with MPU6050
MPU6050::MPU6050() {
    fd = wiringPiI2CSetup(Device_Address);   /*Initializes I2C with device Address*/
    wiringPiI2CWriteReg8 (fd, PWR_MGMT_1, 0x01);	/* Write to power management register */
	wiringPiI2CWriteReg8 (fd, CONFIG, 0);		/* Write to Configuration register */
    wiringPiI2CWriteReg8 (fd, GYRO_CONFIG, 24);	/* Write to Gyro Configuration register */
}

float MPU6050::read(int addr){
    
	short high_byte,low_byte,value;
	high_byte = wiringPiI2CReadReg8(fd, addr);
	low_byte = wiringPiI2CReadReg8(fd, addr+1);
	value = (high_byte << 8) | low_byte;
	return value;
}
float MPU6050:: read_raw_X(){
    return read(GYRO_XOUT_H);
}
float MPU6050:: read_raw_Y(){
    return read(GYRO_YOUT_H);
}
float MPU6050:: read_raw_Z(){
    return read(GYRO_ZOUT_H);
}
float MPU6050:: read_gaccel_X(){
    float gx = read_raw_X() / 131.0;
    return gx;
    
}
float MPU6050:: read_gaccel_Y(){
    float gx = read_raw_Y() / 131.0;
    return gx;
    
}
float MPU6050:: read_gaccel_Z(){
    float gx = read_raw_Z() / 131.0;
    return gx;
}
float MPU6050::read_accel_raw_X(){
    return read(ACCEL_XOUT_H);
}
float MPU6050::read_accel_raw_Y(){
    return read(ACCEL_YOUT_H);
}
float MPU6050::read_accel_raw_Z(){
    return read(ACCEL_ZOUT_H);
}
float MPU6050::read_accel_X(){
    return convertAccel(read_accel_raw_X());
}
float MPU6050::read_accel_Y(){
    return convertAccel(read_accel_raw_Y());
}
float MPU6050::read_accel_Z(){
    return convertAccel(read_accel_raw_Z());
}
float MPU6050::convertAccel(int16_t raw_value){
    float range_g = 4.0f;        // Range of ±4g
    int resolution_bits = 16;    // 16-bit resolution
    
    // Maximum possible raw value based on the sensor's resolution
    int max_raw = (1 << resolution_bits) - 1;
    
    // Convert raw value to g's
    float accel_g = static_cast<float>(raw_value) / max_raw * (range_g * 2);  // range is ±range_g

    // Convert g's to m/s² (1g = 9.81 m/s²)
    float accel_ms2 = accel_g * 9.81f;

    return accel_ms2;
}

float MPU6050::pitch(){
    float pitch;
    float roll;
    calculateAccelTilt(read_accel_X(),read_accel_raw_Y(),read_accel_raw_Z(),roll,pitch);
    return pitch;

}
float MPU6050::roll(){
    float pitch;
    float roll;
    calculateAccelTilt(read_accel_X(),read_accel_raw_Y(),read_accel_raw_Z(),roll,pitch);
    return roll;
}

void MPU6050::calculateAccelTilt(float accX, float accY, float accZ, float &roll, float &pitch) {
    // Calculate roll and pitch using accelerometer data
    roll = atan2(accY, accZ) * 180 / M_PI;  // Convert radians to degrees
    pitch = atan2(-accX, sqrt(accY * accY + accZ * accZ)) * 180 / M_PI; // Convert radians to degrees
}


// Function to calculate degrees of rotation from gyro data

