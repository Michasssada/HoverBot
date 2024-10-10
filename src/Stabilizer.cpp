#include "Stabilizer.h"
Stabilizer::Stabilizer(int pinPwmLeft,int pinDirLeft) : gyro(gyro), engL(engL), engR(engR){
    MPU6050 gyro;
    Engines engL(pinPwmLeft,pinDirLeft);
}
void Stabilizer::stabilize(){
    float get_rotation = gyro.getRoll();
    if(get_rotation >=2||get_rotation <=-2){
        if(get_rotation >= 0){
            engLeft(2,true);
            engRight(2,true);
        }
        if(get_rotation >= 0){
            engLeft(2,false);
            engRight(2, false);
        }
    }



}
void Stabilizer::engLeft(int speed, bool dir){
    engL.engine_write(speed,dir);
}
void Stabilizer::engRight(int speed, bool dir){
    engR.engine_write(speed,dir);

}