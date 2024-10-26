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

float mapValue(float x, float in_min, float in_max, float out_min, float out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
int main()
{
    logger Logger;              // Create logs object
    ReadCfg Config;             // Create conf object
    //Stabilizer stabilize(25,16,13,6);
    SSD1306 display(0x3C);
    Engines engR(12,26);
    Engines engL(18, 16);
    MPU6050 gyro;
    Logger.new_log("init complete");
    while (true)
    {
        //temporal
        float mapped_val = mapValue(gyro.roll(),90,-90,30,-30);
        cout<< abs((int)mapped_val)<<","<<gyro.roll()<<endl;
        if(mapped_val < 0){
            engR.engine_write(abs((int)mapped_val),false);
            engR.engine_write(abs((int)mapped_val),true);
        }
        else{
            engR.engine_write(abs((int)mapped_val),true);
            engR.engine_write(abs((int)mapped_val),false);
        }
        



        

    }
}
