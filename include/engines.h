#ifndef ENGINES_H
#define ENGINES_H
#include <wiringPi.h>
#include <softPwm.h>
class Engines{
    public:
       Engines(int Pin);
       void engine_write(int speed);
    private:
        int pin;
    
};
#endif