
#include <stdio.h>

const int LED = 9;
const int BUTTON = 7;
int val = 0;
const int SENSOR = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  val = digitalRead(BUTTON);
  
  Serial.println(100);
  delay(100);
  
  if(val == HIGH) {
    for(i = 0; i < 255; i++) {
       analogWrite(LED, i);
       delay(10);
    }
  } else {
    digitalWrite(LED, LOW);
  }
}
