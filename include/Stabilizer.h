#ifndef STABILIZER_H
#define STABILIZER_H

#include "movement/engines.h"
#include <iostream>
#include "gyro.h"

class Stabilizer {
public:
    Stabilizer(int pinPwmLeft,int pinDirLeft,int pinPwmRight,int pinDirRight);
    void stabilize(float gyroin);
    void engLeft(int speed, bool dir);
    void engRight(int speed, bool dir);


private:
    
    Engines engL;
    Engines engR;
};

#endif
