//The program is coded By Basanta Chaudhary
/*

*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int len, i, cv = 0, cm = 0, cc = 0, css;
	char str[300];
	printf("Enter Some Text:");
	gets(str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == 'a' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e')
		{
			cv++;
		}
		else if (str[i] == ',')
		{
			cm++;
		}
		else if (str[i] == ';')
		{
			cc++;
		}
		else
		{
			css++;
		}
	}
	printf("\nThe Number of semicolon:%d", cc);
	printf("\nThe Number of Commas:%d", cm);
	printf("\nThe Number of Vowel:%d", cv);
	printf("\nThe Number of Constant:%d", css);
	return 0;
}