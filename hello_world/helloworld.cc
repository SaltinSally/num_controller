int val;
int ledpin = 13;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  val = Serial.read();
  if (val == 'R')
  {
    digitalWrite(ledpin, HIGH);
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(500);
    Serial.println("Hello World!");
  }
}