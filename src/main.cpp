#include "main.h"
#include "speak.h" // Include the header file for the speech class
#include "log.h"
#include "movement/Servo.h" // Ensure this is the correct header for your Servo class
#include "read_cfg.h"
#include <iostream> // Include this for std::cout and std::string
#include <thread>   // Include for std::this_thread::sleep_for
#include <chrono>   // Include for std::chrono::milliseconds
#include "SSD1306.h"
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
    ServoControl cam_servo(18); // Initialize ServoControl on GPIO pin 12
    Stabilizer stabilize(12,16,13,6);
    SSD1306 display(0x3C);
    Engines test_eng(12,16);
    while (true)
    {
        stabilize.stabilize();
    

    }
}
