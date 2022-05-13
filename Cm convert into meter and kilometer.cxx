//The program is Coded By Basanta Chaudhary
/*  wap to read centimeter from user and convert into meter and kilometer      */
#include <stdio.h>
#include <conio.h>
int main()
{
	float cm, m, km;
	printf("Entet centimeter:");
	scanf("%f", &cm);
	m = cm / 100.0;
	km = cm / 100000.0;
	printf("kilometer=%f\tmeter=%f", km, m);
	return 0;
}