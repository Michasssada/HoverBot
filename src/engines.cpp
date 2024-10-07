#include "engines.h"
#include <iostream>
bool init(int Pin){
    if (wiringPiSetupGpio() == -1) {
        std::cerr << "Failed to initialize WiringPi" << std::endl;
        return false;
    }
    softPwmCreate(Pin,0, 100);

}

