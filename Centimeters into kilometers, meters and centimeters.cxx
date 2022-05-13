//The program is Coded By Basanta Chaudhary
/*  wap to centimeters into meters and kilometers      */
#include <stdio.h>
#include <conio.h>
int main()
{
	float me, cen, km;
	printf("Enter Centimeters:");
	scanf("%f", &cen);
	me = cen / 100.0;
	km = cen / 100000.0;
	printf("Meters=%f\tKilometers=%f\t Centimeters=%f", me, km, cen);
	return 0;
}