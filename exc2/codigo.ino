void setup()
{
  pinMode(2, OUTPUT    );
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(1000);// Wait for 1000 millisecond(s)
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
}
