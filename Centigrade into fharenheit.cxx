//The program is Coded By Basanta Chaudhary
/*  wap to convert  Temperature in Centigrade into Temperature in Fharenheit       */
#include <stdio.h>
#include <conio.h>
int main()
{
	float centi, fha;
	printf("Enter Temperature in Centigrade:");
	scanf("%f", &centi);
	fha = 9.0 / 5 * centi + 32;
	printf("Temperature in Fharenheit:%f", fha);

	return 0;
}