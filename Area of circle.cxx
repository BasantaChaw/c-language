//The program is Coded By Basanta Chaudhary
/* wap to find Area of Circle and enter radius from user and display       */
#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main()
{
	float r, area;
	printf("Enter Radius:");
	scanf("%f", &r);
	area = PI * r * r;
	printf("The area of circle:%f", area);
	return 0;
}