#include "main.h"
#include "speak.h" // Include the header file for the speech class
#include "log.h"
#include "Servo.h" // Ensure this is the correct header for your Servo class
#include "read_cfg.h"
#include <iostream> // Include this for std::cout and std::string
#include <thread>   // Include for std::this_thread::sleep_for
#include <chrono>   // Include for std::chrono::milliseconds
#include "SSD1306.h"
using namespace std;

void print(string text)
{
    cout << text << endl; // Function to print text to console
}

int main()
{
    speech mySpeech;            // Create the speech object
    logger Logger;              // Create logs object
    ReadCfg Config;             // Create conf object
    ServoControl cam_servo(18); // Initialize ServoControl on GPIO pin 12
    SSD1306 display(0x3C);
    display.init();
    display.clearDisplay();
    int i;
    while (true)
    {

        for (i = 40; i <= 180; i++)
        {
            cam_servo.setAngle(i);
            cout << i << endl;
            delay(100);
        }
        for (i = 180; i >= 40; i--)
        {
            cam_servo.setAngle(i);
            cout << i << endl;
            delay(100);
        }
    }
}
