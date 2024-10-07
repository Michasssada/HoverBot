#ifndef ENGINES_H
#define ENGINES_H
#include <wiringPi.h>
#include <softPwm.h>
class Engines{
    public:
       bool init(int Pin);
    
};
#endif