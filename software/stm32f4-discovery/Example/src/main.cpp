#include <Arduino.h>

#define GEEN_LED    PD12
#define ORANGE_LED  PD13
#define RED_LED     PD14
#define BLUE_LED    PD15


void setup() 
{
  pinMode(GEEN_LED, OUTPUT);
  pinMode(ORANGE_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(GEEN_LED, HIGH);  
  delay(100);              
  digitalWrite(ORANGE_LED, HIGH);  
  delay(100);              
  digitalWrite(RED_LED, HIGH);  
  delay(100);              
  digitalWrite(BLUE_LED, HIGH);  
  delay(1000);              // wait for a second
  digitalWrite(GEEN_LED, LOW);  
  delay(100);              
  digitalWrite(ORANGE_LED, LOW);  
  delay(100);              
  digitalWrite(RED_LED, LOW);  
  delay(100);              
  digitalWrite(BLUE_LED, LOW);  
  delay(1000);              
}