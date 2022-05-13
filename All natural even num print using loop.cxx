//The program is Coded By Basanta Chaudhary
/*        */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	int i;
	printf("Enter a number:");
	scanf("%d", &num);
	for (i = 2; i <= num; i += 2)
	{
		printf("\n%d", i);
	}
	return 0;
}