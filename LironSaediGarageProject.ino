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
int carsCount = 0;

/*Describe the function
 This set of functions sets the degree of an arm .
 If the number is set to 90, then that means the arm is open
 If the number is set to 170 or 10, then the arm is closed.
*/
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

//describe the function and what the arguments are
/*
 number picker is a function that takes what the number is.  For example if number picker reads that the number 8 for example is equivelent to number then it will display 8 on the 7 segment LED or light. "int number" is the actual number it's self
 */
void numberPicker(int number)
{
  Off();
  
  if (number == 0)
  {
    Zero();
    
  }
  if (number == 1)
  {
    One();
  }
  if (number == 2)
  {
    Two();
  }
  if (number == 3)
  {
    Three();
  }
  if (number ==  4)
  {
    Four();
  }
  if (number == 5)
  {
    Five();
  }
  if (number == 6)
  {
    Six();
  }
  if (number == 7)
  {
    Seven();
  }
  if (number == 8)
  {
    Eight();
  }
  if (number == 9)
  {
    Nine();
  }

}
/*
 All of these functions are basically commands so that the numbers 0-9 can  display on the 7 segmenet LED or light.
 */
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
  Zero();
  rightArmClose();
  leftArmClose();
  delay(3000);
}
int currentEntryMag = 0;
int previousEntryMag = 0;
int currentExitMag = 0;
int previousExitMag = 0;


void loop() 
{
  previousEntryMag = currentEntryMag;
  currentEntryMag = digitalRead(rightMagnet);
  previousExitMag = currentExitMag;
  currentExitMag = digitalRead(leftMagnet);

  //what does this do?
  /*
   currentEntryMag is a verible that compares numbers 1s and 0s (they could also be called yes and no(1 being YES and 2 being NO)) they compare each other so that we can know when a car passes by.
   */
  if (currentEntryMag == 1 && previousEntryMag == 0)
  {
    rightArmOpen();
    delay(1000);
    carsCount += 1;
  }
  else
  {
    rightArmClose();
  }

  //what does this do?
  if (currentExitMag == 1 && previousExitMag == 0)
  {
    leftArmOpen();
    delay(200);
    carsCount -= 1;
  }
  else
  {
    leftArmClose();
  }

  numberPicker(carsCount);
  Serial.println("carsCount"); 
}
