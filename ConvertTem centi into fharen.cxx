//The program is Coded By Basanta Chaudhary
/*function using 
find fhrenhight temperature enter by user in centigrade tenperature        */
#include<conio.h>
#include<stdio.h>
float convertTem(float x);
int main(){
	float centi,fha;
	printf("Enter Temperature in centigrade:");
	scanf("%f",&centi);
	fha=convertTem(centi);
	printf("The Fharenheight Temp:%f",fha);
	
	return 0;
}
float convertTem(float x){
float g;
g=9.0/5*x+32;
return g;
	
}