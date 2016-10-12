/**************************************************************
 * Blynk is a platform with iOS and Android apps to control
 * Arduino, Raspberry Pi and the likes over the Internet.
 * You can easily build graphic interfaces for all your
 * projects by simply dragging and dropping widgets.
 *
 *   Downloads, docs, tutorials: http://www.blynk.cc
 *   Blynk community:            http://community.blynk.cc
 *   Social networks:            http://www.fb.com/blynkapp
 *                               http://twitter.com/blynk_app
 *
 * Blynk library is licensed under MIT license
 * This example code is in public domain.
 *
 **************************************************************
 * This example runs directly on ESP8266 chip.
 *
 * You need to install this for ESP8266 development:
 *   https://github.com/esp8266/Arduino
 *
 * Please be sure to select the right ESP8266 module
 * in the Tools -> Board menu!
 *
 * Change WiFi ssid, pass, and Blynk auth token to run :)
 *
 **************************************************************/

#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char* auth = "";

// Your WiFi credentials.
// Set password to "" for open networks.
char* ssid = "";
char* pass = "";

int isSwiping = 0;

void setup()
{
  config();
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  myservo.attach(D5);  // attaches the servo on pin 9 to the servo object
  myservo.write(0); // starting position for servo
}

void loop()
{
  Blynk.run();
}
BLYNK_WRITE(2){
  if(param.asInt() == 1){
    swipeServo();
  }
}
void swipeServo(){
  myservo.write(90);
  Serial.println("servo 90");
  delay(2000);
  myservo.write(0);
  Serial.println("servo back");
  Blynk.notify("Miaaauwww :3");
}

