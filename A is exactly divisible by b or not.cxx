//The program is coded By Basanta Chaudhary
/*
wap to read two numbers and check wheater the numbers is exactly divisible by by the second nunber or not
*/
#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,b,d;
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	d=a%b;
	if(d==0){
		
		printf("%d  is exactly divisible by %d",a,b);
		
	}else{
		
		printf("%d is not exavtly divisible by %d",a,b);
		
	}
return 0;
}