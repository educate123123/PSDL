
#include<pic18f4550.h>
#include<stdio.h>
void main()
{
    int a,b,c;
    a=2;
    b=2;
    c=a+b;
    TRISB=0;
    PORTB=c;
}