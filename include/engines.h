#ifndef ENGINES_H
#define ENGINES_H
#include <wiringPi.h>
#include <softPwm.h>
class Engines{
    public:
       Engines(int Pin,int Dir_pin);
       void engine_write(int speed,bool Direction);//0-100 engine power, forward is false backward is true
       void stop();
    private:
        int pin;
        int dir;
    
};
#endif