//The program is Coded By Basanta Chaudhary
/*   wap to enter in array and display     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[10], i;
	printf("Enter any Ten numbers:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("You have entered 5 numbers!!");
	for (i = 0; i < 5; i++)
	{
		printf("\n[%d]=%d", i, a[i]);
	}
	return 0;
}