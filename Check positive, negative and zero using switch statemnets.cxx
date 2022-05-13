//The program is Coded By Basanta Chaudhary
/*        */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	switch (num > 0)
	{
	case 1:
		printf("Positive Nunber!");
		break;
	case 0:
		switch (num < 0)
		{
		case 1:
			printf("Negative Number!");
			break;
		case 0:
			printf("Zero Number!");
			break;
		}
	}
	return 0;
}