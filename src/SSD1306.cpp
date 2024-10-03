#include "SSD1306.h"

// SSD1306 commands
#define SSD1306_SET_DISPLAY_OFF 0xAE
#define SSD1306_SET_DISPLAY_ON 0xAF
#define SSD1306_SET_MEMORY_ADDRESSING_MODE 0x20
#define SSD1306_SET_COLUMN_ADDRESS 0x21
#define SSD1306_SET_PAGE_ADDRESS 0x22
#define SSD1306_SET_CONTRAST_CONTROL 0x81
#define SSD1306_SET_NORMAL_DISPLAY 0xA6
#define SSD1306_SET_INVERT_DISPLAY 0xA7
#define SSD1306_SET_DISPLAY_START_LINE 0x40
#define SSD1306_SET_MULTIPLEX_RATIO 0xA8
#define SSD1306_SET_COM_SCAN_DIR 0xC8
#define SSD1306_SET_DISPLAY_OFFSET 0xD3
#define SSD1306_SET_DISPLAY_CLOCK_DIV 0xD5
#define SSD1306_SET_PRECHARGE_PERIOD 0xD9
#define SSD1306_SET_VCOM_DETECT 0xDB
#define SSD1306_SET_CHARGE_PUMP 0x8D
#define SSD1306_SET_SEGMENT_REMAP 0xA1

SSD1306::SSD1306(int i2c_address) : i2c_address(i2c_address) {
    fd = wiringPiI2CSetup(i2c_address);
    clearDisplay();
}

SSD1306::~SSD1306() {
}

void SSD1306::init() {
    sendCommand(SSD1306_SET_DISPLAY_OFF);
    sendCommand(SSD1306_SET_MEMORY_ADDRESSING_MODE);
    sendCommand(0x00); // Horizontal Addressing Mode
    sendCommand(SSD1306_SET_DISPLAY_START_LINE);
    sendCommand(SSD1306_SET_SEGMENT_REMAP);
    sendCommand(SSD1306_SET_COM_SCAN_DIR);
    sendCommand(SSD1306_SET_MULTIPLEX_RATIO); // Corrected here
    sendCommand(0x3F); // 64MUX
    sendCommand(SSD1306_SET_DISPLAY_OFFSET);
    sendCommand(0x00);
    sendCommand(SSD1306_SET_DISPLAY_CLOCK_DIV);
    sendCommand(0x80);
    sendCommand(SSD1306_SET_PRECHARGE_PERIOD);
    sendCommand(0xF1);
    sendCommand(SSD1306_SET_VCOM_DETECT);
    sendCommand(0x40);
    sendCommand(SSD1306_SET_CHARGE_PUMP);
    sendCommand(0x14);
    sendCommand(SSD1306_SET_CONTRAST_CONTROL);
    sendCommand(0xFF); // Maximum contrast
    sendCommand(SSD1306_SET_NORMAL_DISPLAY);
    sendCommand(SSD1306_SET_DISPLAY_ON);
}

void SSD1306::clearDisplay() {
    for (int i = 0; i < sizeof(buffer); i++) {
        buffer[i] = 0;
    }
    display();
}

void SSD1306::drawPixel(int x, int y, bool color) {
    if (x >= 0 && x < 128 && y >= 0 && y < 64) {
        if (color) {
            buffer[x + (y / 8) * 128] |= (1 << (y % 8));
        } else {
            buffer[x + (y / 8) * 128] &= ~(1 << (y % 8));
        }
    }
}

void SSD1306::display() {
    sendCommand(SSD1306_SET_COLUMN_ADDRESS);
    sendCommand(0);   // Start Column
    sendCommand(127); // End Column

    sendCommand(SSD1306_SET_PAGE_ADDRESS);
    sendCommand(0);   // Start Page
    sendCommand(7);   // End Page

    for (int i = 0; i < sizeof(buffer); i++) {
        sendData(buffer[i]);
    }
}

void SSD1306::printText(int x, int y, const std::string& text) {
    for (char c : text) {
        // Check if the character is within the bounds of the defined characters
        if (c < ' ' || c > '~') {
            c = ' '; // Replace out-of-range characters with a space
        }

        // Get the character index in the font array
        int charIndex = c - ' ';
        
        // Draw the character pixel by pixel
        for (int i = 0; i < 5; i++) { // Each character is 5 pixels wide
            unsigned char line = characters[charIndex * 5 + i];
            for (int j = 0; j < 8; j++) { // Each character is 8 pixels high
                if (line & 0x01) {
                    drawPixel(x + i, y + j, true); // Draw pixel if bit is set
                } else {
                    drawPixel(x + i, y + j, false); // Clear pixel if bit is not set
                }
                line >>= 1; // Shift right to check the next pixel
            }
        }
        x += 6; // Move x position for next character (5 pixels + 1 pixel for spacing)
    }
}

void SSD1306::sendCommand(unsigned char command) {
    wiringPiI2CWriteReg8(fd, 0x00, command);
}

void SSD1306::sendData(unsigned char data) {
    wiringPiI2CWriteReg8(fd, 0x40, data);
}
