//The program is Coded By Basanta Chaudhary
/*   wap to count number of digits in an number     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num, count = 0;
	printf("Enter a numbers:");
	scanf("%d", &num);
	while (num)
	{
		num = num / 10;
		count++;
	}
	printf("Total digits is: %d", count);
	return 0;
}