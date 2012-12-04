#include <SoftwareSerial.h>

#define Rx 11 
#define Tx 12
 
SoftwareSerial tty(11, 12);
 
void setup()
{
    pinMode(Rx, INPUT);
    pinMode(Tx, OUTPUT);
    tty.begin(9600);
    Serial.begin(115200);
}
 
void loop()
{
    if(Serial.available())
    {
       tty.write((char)Serial.read());
     } 
    else  if(tty.available())
    {
       Serial.write((char)tty.read());
     }  
 
}
