//The program is Coded By Basanta Chaudhary
/*   wap to illustrate the memory location allocated by each array elements   */
#include<stdio.h>
#include<conio.h>
int main(){
float a[]={12.3,5.3,6.8,8.7,4.5};	
int i;
for(i=1;i<5;i++)
{
	printf("\na[%d]=%u",i,&a);	
}
	return 0;
}