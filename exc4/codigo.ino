int botao = 10; // 
int led = 9; //
int estadobotao = 0;//



void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}
void loop(){
  int estadobotao = digitalRead(botao);
  Serial.println(estadobotao);
  if (estadobotao == LOW){
    digitalWrite(led, HIGH);
  }
  if (estadobotao == HIGH){
    digitalWrite(led, LOW);
  }

}
