//The program is Coded By Basanta Chaudhary
/*  wap to convert centimeter into meter and kilometer      */
#include <stdio.h>
#include <conio.h>
int main()
{
	float cm,m,km;
	printf("Entere length in Centimeter:");
	scanf("%f",&cm);
	m=cm/100.0;
	km=cm/100000.0;
	printf("Meter=%f\tKilometer=%f",m,km);
	return 0;
}