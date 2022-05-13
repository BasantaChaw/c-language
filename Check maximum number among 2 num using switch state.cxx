//The program is Coded By Basanta Chaudhary
/*     wap to read  two numbers from user and determine its maximum and minimum numbers using switch statements   */
#include <stdio.h>
#include <conio.h>
int main()
{
int a,b;
printf("Enter any two numbers:");
scanf("%d%d",&a,&b);
switch(a>b){
	case 0:
	printf("Maximum number is:%d",b);
	break;
	case 1:
	printf("Maximum number is :%d",a);
	break;
		
			}	
	return 0;
}