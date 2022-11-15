#include<SoftwareSerial.h>
  SoftwareSerial BTSerial(3,2);
 // int Button =4;
 int LIGHT = 0;
 int value = 0;
void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
 // pinMode(Button,INPUT_PULLUP);
 // pinMode(led,OUTPUT); 
}
void loop() {
  value = analogRead(LIGHT);
  Serial.println(value);
 //int button= digitalRead(Button);
 if (value>700) 
      BTSerial.println("a");
 if (value < 700)
  {      BTSerial.println("b");
 }
}
