//The program is Coded By Basanta Chaudhary
/*  wap to read nunber from user and determine positive ,negative and Zero numbers   using if...else if    */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	if (num > 0)
	{
		printf("The number is positive!!");
	}
	else if (num < 0)
	{
		printf("The Number Is Negative!!");
	}
	else if (num == 0)
	{
		printf("The number is Zero!!");
	}

	return 0;
}