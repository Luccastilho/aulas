void setup ()
{
  pinMode(13,OUTPUT);
   pinMode(12,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(9,OUTPUT);
}

void loop()
{
  digitalWrite(13, 1);
  delay (2000);
  digitalWrite(12,1);
  delay(1000);
  digitalWrite(11,1);
  delay(1000);
  digitalWrite(10,1);
  delay(1000);
  digitalWrite(9,1);
   digitalWrite(13,0);
   digitalWrite(12,0);
   digitalWrite(11,0);
   digitalWrite(10,0);
   digitalWrite(9,0);
}
