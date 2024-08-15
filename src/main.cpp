#include <neopixel_demo.h>
#include <Arduino.h>

// debugging related
// #include "avr8-stub.h"
// #include "app_api.h"

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup()
{
  Serial.begin(115200);
  begin();
  // debug_init();
}

void loop()
{
  Serial.println("loop");
  auto color = GetColor(0, 0, 0, 254);
  for (int i = 0; i <= 35; i++)
  {
    SetPixelAndWait(i, color, 100);
    clear();
  }

  for (int i = 35; i >= 0; i--)
  {
    SetPixelAndWait(i, color, 100);
    clear();
  }

  // demo();
}
