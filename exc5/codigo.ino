int botao = 7; // 
int led = 10; //
int estadobotao = 0;//

void setup()
{
  pinMode(led , OUTPUT); //
  pinMode (botao , INPUT); // 
}

void loop()
{

  digitalWrite (10, HIGH);
  delay (0);
  digitalWrite(10, LOW);
  delay(0);

  estadobotao = digitalRead (botao); //
  if ( estadobotao == HIGH ) { //
    digitalWrite(led , LOW); //
    delay(100);//
     }
  else { //
    digitalWrite (led , HIGH ); //
      delay(100);//
  }

}
