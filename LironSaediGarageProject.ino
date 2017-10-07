int delayv = 300;
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

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
{digitalWrite(a, OUTPUT);
  digitalWrite(b, OUTPUT);
  digitalWrite(c, OUTPUT);
}
void Eight()

{
  digitalWrite(a, OUTPUT);
  digitalWrite(b, OUTPUT);
  digitalWrite(c, OUTPUT);
  digitalWrite(d, OUTPUT);
  digitalWrite(e, OUTPUT);
  digitalWrite(f, OUTPUT);
  digitalWrite(g, OUTPUT);
}
void Nine()
{
  digitalWrite(a, OUTPUT);
  digitalWrite(b OUTPUT);
  digitalWrite(c, OUTPUT);
  digitalWrite(g, OUTPUT);
  digitalWrite(f, OUTPUT);
}


void setup()
{
  // put your setup code here, to run once:
  

}

void loop() {
  // put your main code here, to run repeatedly:
  //  for (int i = 0; i < 9; i++)
  //  { digitalWrite(i, HIGH);
  //
  //  }
  Nine();
  delay(dealyv);
  Eight();
  delay(dealyv);

}
