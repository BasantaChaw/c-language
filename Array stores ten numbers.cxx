//The program is Coded By Basanta Chaudhary
/*  wap that reads 10 numbers from keybord,stores in array and dispalys entered numbers in the screen     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num[10];
	int i;
	printf("Enter any ten numbers:\n");
	for (i = 0; i <= 5; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("\nYou have entered Ten numbers!!");
	for (i = 0; i <= 5; i++)
	{
		printf("\na[%d]=%d", i, num[i]);
	}

	return 0;
}