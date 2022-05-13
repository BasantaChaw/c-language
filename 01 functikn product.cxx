//The program is Coded By Basanta Chaudhary
/*function with arg and return value wap to find product of any two numbers        */
#include<conio.h>
#include<stdio.h>
int pro(int a,int b);
int main(){
	
	int x,y,z;
	printf("Enter any two numbers:");
	scanf("%d%d",&x,&y);
	z=pro(x,y);
	printf("The product number of two is:%d",z);
	return 0;
}int pro(int a,int b){
int product;
product=a*b;
return product;	
	
	
}