/* ELEC 3450 Microcontrollers and Embedded Communication
Prof. Bruce Decker
Shane McNamara
Dhruv Patel
Lab 5 Serial Communication
*/

#include<pic16f877a.h>

int main(void)
{
TRISC=0;
int i=0;
for(int i=0;i<100;i++)
{

PORTC=i-1;

}

}