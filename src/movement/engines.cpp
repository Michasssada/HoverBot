#include "engines.h"
#include <iostream>
Engines::Engines(int Pin, int Dir_pin): pin(Pin), dir(Dir_pin){
    if (wiringPiSetupGpio() == -1) {
        std::cerr << "Failed to initialize WiringPi" << std::endl;
    }
    softPwmCreate(Pin,0, 100);
    pinMode(dir,OUTPUT);
    

}
Engines::~Engines(){
    softPwmWrite(pin, 0);
}
void Engines::engine_write(int speed, bool Direction){
    if(Direction){
        digitalWrite(dir,1);
    }
    else{
        digitalWrite(dir,0);

    }
    softPwmWrite(pin, speed);

}
void Engines::stop(){
    softPwmWrite(pin, 0);

}

