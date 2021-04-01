// Link para o circuito no tinkercad : https://www.tinkercad.com/things/lNwHROFyf61-exemplo-servo/editel?sharecode=-Oo3cLlxBmf3htv97vgeofVAF3vXAol8ty330pSjz9w
#include <Servo.h>

Servo meuServo;

void setup()
{
  meuServo.attach(6);

}

void loop()
{
  int pos = 0;
  for (pos = 0; pos <= 180; pos += 1) {
    meuServo.write(pos);
    delay(10); 
  }
  delay(1000);
  for (pos = 180; pos >= 0; pos -= 1) {
    meuServo.write(pos);
    delay(10);
  }
}
