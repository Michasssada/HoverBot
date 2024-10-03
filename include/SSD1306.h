#ifndef SSD1306_H
#define SSD1306_H

#include <string>
#include <wiringPiI2C.h>
#include "fonts.h" // Include the font header

class SSD1306 {
public:
    SSD1306(int i2c_address);
    ~SSD1306();

    void init();            // Initialize the display
    void clearDisplay();    // Clear the display
    void drawPixel(int x, int y, bool color); // Draw a pixel on the display
    void display();         // Refresh the display with the buffer content
    void printText(int x, int y, const std::string& text); // Print text on the display

private:
    int i2c_address;        // I2C address for SSD1306
    int fd;                 // File descriptor for I2C
    unsigned char buffer[1024]; // Buffer for pixel data

    void sendCommand(unsigned char command); // Send a command to the display
    void sendData(unsigned char data);       // Send data to the display
};

#endif // SSD1306_H
