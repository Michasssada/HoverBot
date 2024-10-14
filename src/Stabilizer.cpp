#include "Stabilizer.h"
#define ENG_TEST_SPEED 4
using namespace std;
Stabilizer::Stabilizer(int pinPwmLeft,int pinDirLeft,int pinPwmRight,int pinDirRight) : engL(engL), engR(engR){

    Engines engL(pinPwmLeft,pinDirLeft);
    Engines engR(pinPwmRight, pinDirRight);
}
void Stabilizer::stabilize(float gyroin){
    float get_rotation = gyroin;
    cout<< get_rotation << endl;
    if(get_rotation >=2||get_rotation <=-2){
        if(get_rotation >= 0){
            engL.engine_write(4,true);
            engR.engine_write(4,true);
        }
        if(get_rotation >= 0){
            engL.engine_write(4,true);
            engR.engine_write(4,true);
        }
    }



}
void Stabilizer::engLeft(int speed, bool dir){
    engL.engine_write(speed,dir);
}
void Stabilizer::engRight(int speed, bool dir){
    engR.engine_write(speed,dir);

}