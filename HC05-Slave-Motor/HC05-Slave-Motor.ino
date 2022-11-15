#include<SoftwareSerial.h>
  SoftwareSerial BTSerial(3,2);
  int enA = 9;
  int in1 = 8;
  int in2 = 7;
 // int Button =4;
  int led=5;
  String text = "";
void setup() {
  pinMode(enA, OUTPUT);
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  BTSerial.begin(9600);
 // pinMode(Button,INPUT_PULLUP);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  pinMode(13,OUTPUT);
}

void loop() {
 //int button= digitalRead(Button);
  if(BTSerial.available()>0)
 {
       Serial.write(BTSerial.read());
       //Serial.print(text);
       //text.trim();
 }
 if(BTSerial.read()=='a')  
 {
                analogWrite(enA, 255);
                digitalWrite(in1, HIGH);
                 digitalWrite(in2, LOW);
                 digitalWrite(13, HIGH);
 }
 if (BTSerial.read()=='b')
 {
   digitalWrite(in1, LOW);
   digitalWrite(in2, LOW);
                    digitalWrite(13, LOW);
 }

}