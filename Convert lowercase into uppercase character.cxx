//The program is Coded By Basanta Chaudhary
/*   wap to convert lowercase into uppercase its vice versa using if...else if    */
#include <stdio.h>
#include <conio.h>
int main()
{
	char c;
	printf("Enter a characrer:");
	scanf("%c", &c);
	if (c >= 65 && c <= 90)
	{
		c += 32;
		printf("The Lowercase Charcter :%c", c);
	}
	else if (c >= 97 && c <= 122)
	{
		c -= 32;
		printf("The uppercase charcter: %c", c);
	}
	return 0;
}