#include <SoftwareSerial.h>

SoftwareSerial tty(7, 8);
 
void setup()
{
  tty.begin(19200);
  Serial.begin(115200);
}
 
void loop()
{
  if (tty.available())
    Serial.print((char)tty.read());
  if (Serial.available())
    tty.print((char)Serial.read());
}

