//The program is Coded By Basanta Chaudhary
/*  wap to check alphabets read a character from user using Conditinal operator      */
#include <stdio.h>
#include <conio.h>
int main()
{
	char c;
	printf("Enter a Charceter:");
	scanf("%c",&c);
((c>='a'&&c<='z')||(c>='A'&&c<='Z'))?printf("Alphabets"):printf("Not alphabets");
	return 0;
}