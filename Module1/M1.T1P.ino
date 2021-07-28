void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int w = digitalRead(7);
  if (w == 0) {
  	digitalWrite(8, LOW);
  } else {
    digitalWrite(8, HIGH);
  }
  if (millis() % 1000 == 0) {
    if (w == 0) {
      Serial.write("Button is currently not pressed, so light is off.\n");
    } else {
      Serial.write("Button is currently pressed, so light is on.\n");
    }
  }
}