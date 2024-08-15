// #include <Arduino.h>
// #include <NewPing.h>

// #define TRIGGER_PIN  12
// #define ECHO_PIN     12

// #define GREEN_LED_PIN  10
// #define YELLOW_LED_PIN  9
// #define RED_LED_PIN     8

// #define MAX_DISTANCE 200

// const int meanSize=12;
// int values[meanSize];
// int index=0;

// NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
// int addValueAndGetMean(int distance)
// {
//   values[index]=distance;
//   index++;
//   if(index >= meanSize)
//   {
//     index=0;
//   }

//   int sum = 0;
//   for (int i=0;i<meanSize;i++)
//   {
//     sum = sum + values[i];
//   }

//   return sum/meanSize;
// }

// void setup() 
// {
//   pinMode(GREEN_LED_PIN, OUTPUT);
//   pinMode(YELLOW_LED_PIN, OUTPUT);
//   pinMode(RED_LED_PIN, OUTPUT);
//   Serial.begin(115200);
// }
 
// void loop() 
// {
//   delay(10);
//   int mean_distance=addValueAndGetMean(sonar.ping_cm());
//   Serial.print("Gemittelter Ping: ");
//   Serial.print(mean_distance);
//   Serial.println("cm");

//   digitalWrite(GREEN_LED_PIN, LOW);
//   digitalWrite(YELLOW_LED_PIN, LOW);
//   digitalWrite(RED_LED_PIN, LOW);
//   if (mean_distance >= 120)
//   {
//     digitalWrite(GREEN_LED_PIN, HIGH);
//   }
//   else if (mean_distance >= 20)
//   {
//     digitalWrite(YELLOW_LED_PIN, HIGH);
//   }
//   else
//   {
//    digitalWrite(RED_LED_PIN, HIGH);
//   }
   
// }