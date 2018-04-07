#include <SoftwareSerial.h>
SoftwareSerial myserial (8,9);


void setup() {
myserial.begin(9600);
Serial.begin(9600);
}



void loop() {
  if(myserial.available())
{
  Serial.write(myserial.read());
}
    if (Serial.available() )
    {
      myserial.write(Serial.read() );
    }
  }
  // put your main code here, to run repeatedly:zd


