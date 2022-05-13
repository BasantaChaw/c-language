//The program is Coded By Basanta Chaudhary
/*   wap to read an array of length N.Display total count number of positive ,negative numbers     */
#include <stdio.h>
#include <conio.h>
int main()
{
	int num[10],i,countP=0,countNe=0,countZ=0,n;
	printf("How many numbers are there??");scanf("%d",&n);
	printf("\nThere are %d number!!",n);
	for(i=0;i<n;i++){
	scanf("%d",&num[i]);	
	}for(i=0;i<n;i++)
	if(num[i]>0){
		countP++;
	}else if(num[i]<0){
	countNe++;	
	}else{
	countZ++;	
	}
	printf("The number of positives:%d",countP);
		printf("\nThe number of Negatives:%d",countNe);
		printf("\nThe number of Zeros:%d",countZ);
	
	return 0;
}