//The program is Coded By Basanta Chaudhary
/*  wap to check alphabets or not enter by user a character      */
#include <stdio.h>
#include <conio.h>
int main()
{
	char c;
	int k;
	printf("Enter a character:");
	scanf("%c", &c);
	k = ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
	if (k > 0)
	{
		printf("Alphabets");
	}
	else
	{
		printf("Not alphabets!");
	}
	return 0;
}