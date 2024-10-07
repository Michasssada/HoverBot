#include "engines.h"
#include <iostream>
Engines::Engines(int Pin, int Dir_pin): pin(Pin), dir(Dir_pin){
    if (wiringPiSetupGpio() == -1) {
        std::cerr << "Failed to initialize WiringPi" << std::endl;
    }
    softPwmCreate(Pin,0, 100);
    

}
void Engines::engine_write(int speed, bool Direction){
    if(Direction){
        Wir
    }
    else{

    }
    softPwmWrite(pin, speed);

}
void Engines::stop(){
    softPwmWrite(pin, 0);

}

