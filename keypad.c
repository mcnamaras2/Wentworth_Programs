
#include<htc.h>
 
 void main(void)
 {
 	char key=0;
 
 						//set PORTB to value
 	TRISC = 0b11110000;					//set TRISB to value
 
 	key = keypressed();
 {
 	char keypressed(void)
 	{
 	PORTB=0b11111110;
 	switch(portb)
 		{
 		case 0xEE:return 1;
 		case 0xDE:return 4;
 		case 0xBE:return 7;
 		case 0x7E:return 0;
 		}
 	portb=0b11111101;
 	switch(portb)
 		{
 		case 0xED:return 2;
 		case 0xDD:return 5;
 		case 0xBD:return 8;
 		case 0x7D:return F;
 		}
 	portb=0b11111011;
 		switch(portb)
 		{
 		case 0xEB:return 3;
 		case 0xDB:return 6;
 		case 0xBB:return 9;
 		case 0x7B:return E;
 		}
 	portb=0b11110111;
 	switch(portb)
 		{
 		case 0xE7:return A;
 		case 0xD7:return B;
 		case 0xB7:return C;
 		case 0x77:return D;
 		}
 	}
 	return -1;
