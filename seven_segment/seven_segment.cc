// assign pin numbers to led by letter
int a = 7;
int c = 5;
int b = 6;
int d = 10;
int e = 11;
int f = 8;
int g = 9;
int dp = 4;

void digital_0(void) // display number 0
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}
void setup()
{
  // put your setup code here, to run once:
  int i;
  for (i = 4; i <= 11; i++)
    pinMode(i, OUTPUT);
}
void loop()
{
  // put your main code here, to run repeatedly:
  while (1)
  {
    digital_0();
    delay(9999);
  }
}
