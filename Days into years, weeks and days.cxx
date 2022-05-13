//The program is Coded By Basanta Chaudhary
/*  Convert days into years,weeks and days      */
#include <stdio.h>
#include <conio.h>
int main()
{
	int weeks,years,days;
	printf("Enter number of days:");
	scanf("%d",&days);
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	printf("Years=%d\tWeeks=%d\tDays=%d",years,weeks,days);
	return 0;
}