
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
  if(Serial.available()){
    String s = Serial.readString();
    Serial.println(s);
    if (s.equals("ld bw")) {
      leds(255, 255, 255);
    }
    if (s.equals("ld r")) {
      leds(255, 0, 0);
    }
    if (s.equals("ld g")) {
      leds(0, 255, 0);
    }
    if (s.equals("ld b")) {
      leds(255, 255, 0);
    }
  }

}
void initialization(){
  pixels.begin();
  Serial.begin(115200);
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
void splitString(String data, char delimiter) {
  int start = 0;
  int end = data.indexOf(delimiter);

  while (end != -1) {
    String part = data.substring(start, end);
    Serial.println(part);  // Print each part
    start = end + 1;  // Move to the next part
    end = data.indexOf(delimiter, start);  // Find the next delimiter
  }

  // Print the last part
  String lastPart = data.substring(start);
  Serial.println(lastPart);
}