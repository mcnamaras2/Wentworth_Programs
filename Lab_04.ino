#include "TimerOne.h"
byte count=0x0;
int i=1;

void setup() { 
Serial.begin(9600);
Timer1.initialize(100000);
Timer1.attachInterrupt(callback); 
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}



void loop() {
}

  void callback(void)
{

while(i==1)
{
switch(count)
{
   case 0xF:
// write code to output value for 7-Seg “F”

 // write 'F'
 digitalWrite(2, LOW);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
   case 0xE:
// write code to output value for 7-Seg “E”

 // write 'E'
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
   case 0xd:
// write code to output value for 7-Seg “d”

 // write 'd'
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(8, LOW);
 delay(100000);
 break;
   case 0xC:
// write code to output value for 7-Seg “C”

 // write 'C'
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, HIGH);
 delay(100000);
 break;
   case 0xb:
// write code to output value for 7-Seg “b”

 // write b'
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
   case 0xA:
// write code to output value for 7-Seg “A”

 // write 'A'
 digitalWrite(2, LOW);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
case 0x9:
// write code to output value for 7-Seg “9”
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
 case 0x8:
// write code to output value for 7-Seg “8”

 // write '8'
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
 case 0x7:
// write code to output value for 7-Seg "7"
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 delay(100000);
 break;
 case 0x6:
// write code to output value for 7-Seg “6”
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
 case 0x5:
// write code to output value for 7-Seg “5”
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
 case 0x4:
// write code to output value for 7-Seg “4”
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 delay(100000);
 break;
 case 0x3:
// write code to output value for 7-Seg “3”
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(8, LOW);
delay(100000);
 break;
 case 0x2:
// write code to output value for 7-Seg “2”
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(8, LOW);
 delay(100000);
 break;
 case 0x1:
// write code to output value for 7-Seg “1”
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 delay(100000);
 break;
 case 0x0:
// write code to output value for 7-Seg “0”
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, HIGH);
 delay(100000);
 break;

}
count++;
}

}



