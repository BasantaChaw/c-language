//The program is Coded By Basanta Chaudhary
/* wap to sort ascendiing order       */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num[50], i, j, temp, n;
	printf("\How many numbers are there??\n");
	scanf("%d", &n);
	printf("\nThere are %d  Numbers!!\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}