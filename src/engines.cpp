#include "engines.h"
#include <iostream>
Engines::Engines(int Pin): pin(Pin){
    if (wiringPiSetupGpio() == -1) {
        std::cerr << "Failed to initialize WiringPi" << std::endl;
    }
    softPwmCreate(Pin,0, 100);
    

}
void Engines::engine_write(int speed){
    softPwmWrite(pin, speed);

}

