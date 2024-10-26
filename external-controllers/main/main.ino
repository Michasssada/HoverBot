
#include <Adafruit_NeoPixel.h>
#define PIN        3 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 7 // Popular NeoPixel ring size
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
  initialization();
  Serial.print("in");

}

void loop() {
  // put your main code here, to run repeatedly:

}
void initialization(){
  pixels.begin();
  Serial.begin(115200);
  leds(255,0,0);
}
void leds(int red, int green , int blue){//leds will be defused anyway
  pixels.clear(); // Set all pixel colors to 'off'

  pixels.show();
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(red, green, blue));

    pixels.show();   // Send the updated pixel colors to the hardware.
  }
}