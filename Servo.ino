#define BLYNK_PRINT Serial 


#include <ESP8266WiFi.h> 
#include <BlynkSimpleEsp8266.h> 
#include <Servo.h> 


char auth[] = "Auth Token"; 
char ssid[] = "WifiName"; 
char pass[] = "Password"; 


Servo gerak_servo; 


BLYNK_WRITE(V1){ 
  gerak_servo.write(param.asInt()); 
}


void setup(){ 
 Serial.begin(9600);
 
 gerak_servo.attach(2); 

  
 Blynk.begin(auth, ssid, pass); 
 
} 
void loop(){ 
  Blynk.run(); 
  
}
