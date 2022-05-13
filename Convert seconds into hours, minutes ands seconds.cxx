//The program is Coded By Basanta Chaudhary
/*   wap to convert numbers of seconds into hours,minutes and seconds     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int sec, min, hr;
	printf("Enter numbers of seconds:");
	scanf("%d", &sec);
	hr = sec / 3600;
	min = (sec % 3600) / 60;
	sec = sec - ((hr * 3600) + (min * 60));
	printf("Hours=%d\tMinutes=%d\tSeconds=%d", hr, min, sec);
	return 0;
}