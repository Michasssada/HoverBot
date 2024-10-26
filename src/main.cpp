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
#include "PID.h"
using namespace std;

void print(string text)
{
    cout << text << endl; // Function to print text to console
}
void stabilize(){
    
}
int main()
{
    logger Logger;              // Create logs object
    ReadCfg Config;             // Create conf object
    //Stabilizer stabilize(25,16,13,6);
    SSD1306 display(0x3C);
    Engines engL(12,26);
    Engines engR(18, 16);
    PID pid(1.0, 0, 0);
    MPU6050 gyro;
    Logger.new_log("init complete");
    while (true)
    {
        float currentAngle = gyro.roll();
        float deltaTime = 0.01;  // Time between loop iterations (10ms)

        bool moveBackward = false;

        // Compute PID output, passing a pointer to update direction, and get speed
        float speed = pid.compute(currentAngle, deltaTime, &moveBackward);
        int engSpeedInt = static_cast<int>(round(speed)); 
        cout<<speed<<endl;

        engL.engine_write(engSpeedInt,moveBackward);
        engL.engine_write(engSpeedInt,!moveBackward);
        delay(10);



        

    }
}
