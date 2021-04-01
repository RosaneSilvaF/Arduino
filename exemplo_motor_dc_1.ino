int funcionar;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
}

void loop()
{
  funcionar=digitalRead(7);
  if(funcionar==1){
  	digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8,LOW);
  }
}