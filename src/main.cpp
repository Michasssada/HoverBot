#include "main.h"
#include "speak.h" // Include the header file for the speech class
#include "log.h"
#include "movement/Servo.h" // Ensure this is the correct header for your Servo class
#include "read_cfg.h"
#include <iostream> // Include this for std::cout and std::string
#include <thread>   // Include for std::this_thread::sleep_for
#include <chrono>   // Include for std::chrono::milliseconds
#include "SSD1306.h"
#include "gyro.h"
#include "movement/engines.h"
#include "Stabilizer.h"
using namespace std;

void print(string text)
{
    cout << text << endl; // Function to print text to console
}

int main()
{
    logger Logger;              // Create logs object
    ReadCfg Config;             // Create conf object
    //Stabilizer stabilize(25,16,13,6);
    SSD1306 display(0x3C);
    Engines engL(12,26);
    Engines engR(18, 16);

    MPU6050 gyro;
    while (true)
    {
        float get_rotation = gyro.roll();
        cout<< get_rotation << endl;
        if(get_rotation >=5||get_rotation <=-5){
            if(get_rotation <= 0){
                engL.engine_write(4,false);
                engR.engine_write(4,true);
            }
            if(get_rotation >= 0){
                engL.engine_write(4,true);
                engR.engine_write(4,false);
            }
        }
        else{
            engL.engine_write(0,true);
            engR.engine_write(0,true);
        }

        

    }
}
