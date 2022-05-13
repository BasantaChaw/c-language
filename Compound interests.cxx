//The program is Coded By Basanta Chaudhary
/*     wap to find compound  Interests */
#include <stdio.h>
#include<math.h>
#include <conio.h>
int main()
{
	int p,t,r,CI;
	printf("Enter principle,Time,Rate:");
	scanf("%d%d%d",&p,&t,&r);
	CI=p*(pow((1+r/100),t));
	printf("The Compound Interests:%d",CI);
	return 0;
}