#include <Adafruit_NeoPixel.h>
#include <Arduino.h>




void begin();
void clear();
void demo();
void SetPixelAndWait(int8_t pixel, uint32_t color, unsigned long ms);
void setPixel(int8_t pixel, uint32_t color);
uint32_t GetColor(uint8_t red,uint8_t green, uint8_t blue,uint8_t white);
void colorWipe(uint32_t c, uint8_t wait);
void rainbow(uint8_t wait);
void rainbowCycle(uint8_t wait);
void theaterChase(uint32_t c, uint8_t wait);
void theaterChaseRainbow(uint8_t wait);
uint32_t Wheel(byte WheelPos);