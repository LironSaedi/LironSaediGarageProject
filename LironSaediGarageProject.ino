#include <Servo.h>

int delayv = 700;
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int rightMagnet = 11;
int leftMagnet = 12;
Servo leftArm;
Servo rightArm;
void rightArmOpen()
{
  rightArm.write(90);
}
void leftArmOpen()
{
  leftArm.write(90);
}

void rightArmClose()
{
  rightArm.write(10);
}
void leftArmClose()
{
  leftArm.write(170);
}
void Zero()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
}
void One()
{
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}
void Two ()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
}
void Three ()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}
void Four()
{
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}
void Five()
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}
void Six()
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);


}
void Seven()
{ digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}
void Eight()

{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void Nine()
{
  digitalWrite(a, HIGH);
  digitalWrite(b , HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
}
void Off()
{

  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}


void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  leftArm.attach(10);
  pinMode(rightMagnet, INPUT);
  pinMode(leftMagnet, INPUT);
  rightArm.attach(9);
  //pinMode(Nine,OUTPUT);
  // put your setup code here, to run once:

  Serial.begin(9600);

  rightArmClose();
  leftArmClose();
  delay(3000);
}

void loop() {

  if (digitalRead(rightMagnet))  
  {
    rightArmOpen();
    delay(200);
  }
  else
  {
    rightArmClose();
  }
  if (digitalRead(leftMagnet))
  {
    leftArmOpen();
    delay(200);
  }
  else
  {
    leftArmClose();
  }
  
}
