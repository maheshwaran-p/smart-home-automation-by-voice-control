/*************************************************************

Download latest Blynk library here:

https://github.com/blynkkk/blynk-library/releases/latest

Downloads, docs, tutorials: http://www.blynk.cc

Sketch generator:           http://examples.blynk.cc

Blynk community:            http://community.blynk.cc

*************************************************************

This example runs directly on NodeMCU.

Note: This requires ESP8266 support package:

https://github.com/esp8266/Arduino

Change WiFi ssid, pass, and Blynk auth token to run :)

*************************************************************/

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>


// You should get Auth Token in the Blynk App.

// Go to the Project Settings (nut icon).

char auth[] = "YourAuthToken";


// Your WiFi credentials.

// Set password to "" for open networks.

char ssid[] = "YourNetworkName";

char pass[] = "YourPassword";


void setup()

{

// Debug console

Serial.begin(9600);

Blynk.begin(auth, ssid, pass);

Blynk.syncAll(); //This will sync the last state of your device

}

void loop()

{

Blynk.run();

}
