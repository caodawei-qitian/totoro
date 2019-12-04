#include <Servo.h>

Servo myservo ;

int servoPin = 12;
int rainPin = 11;
int i=2400;

void setup() {
  Serial.begin(9600);  
  myservo.attach(servoPin);
  pinMode(rainPin,INPUT);
}
void loop() 
{
   if(digitalRead(rainPin))
   {
    while(i<=2400)
    {
    myservo.writeMicroseconds(i);
    delay(20);
    i+=100;
    }
   }
    else
    {
    while(i>=600)
    {
    myservo.writeMicroseconds(i);
    delay(20);
    i-=100;
    }
   }
   Serial.println(digitalRead(rainPin));
}
