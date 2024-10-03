// ServoControl.h
#ifndef SERVO_H
#define SERVO_H

#include <wiringPi.h>
#include <softPwm.h>

class ServoControl {
public:
    ServoControl(int gpioPin);  // Constructor to initialize the servo on a specific GPIO pin
    ~ServoControl();            // Destructor to clean up

    void setAngle(int angle);   // Set the servo to a specific angle (0-180 degrees)
    
private:
    int pin;
    int mapAngleToDutyCycle(int angle);  // Map angle to corresponding PWM duty cycle
};

#endif
