int led=13;
int push=12;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(push,INPUT);
}

void loop() {
  if(digitalRead(push)==HIGH)
     digitalWrite(led,HIGH);
  else
     digitalWrite(led,LOW);
}
