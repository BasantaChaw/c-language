//The program is Coded By Basanta Chaudhary
/*Wap to find Compound Interest        */
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int p, t, r;
	float CI;
	printf("Enter principle:");
	scanf("%d", &p);
	printf("Enter Time:");
	scanf("%d", &t);
	printf("Enter Rate:");
	scanf("%d", &r);
	CI = p*(pow((1 + 100 / r), t));
	printf("The Simple Interest:%f", CI);
	return 0;
}