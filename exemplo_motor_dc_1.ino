// Link para o circuito no tinkercard : https://www.tinkercad.com/things/8Im0YqlqjIb-exemplo-motor-dc-/editel?sharecode=XqbI3pTmkABP80U7kl9ps9fBdXByUY8D5o6MXlUGCnA
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
