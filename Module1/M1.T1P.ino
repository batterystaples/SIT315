void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
}

void loop()
{
  int w = digitalRead(7);
  if (w == 0) {
    digitalWrite(8, LOW);
  } else {
    digitalWrite(8, HIGH);
  }
}