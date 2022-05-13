#include<iostream>
using namespace std;

int main() {
FILE *fptr;
fptr=fopen ("c:\\test.txt", "w") ;
if(fptr==NULL) 
{
printf("\nFile can not be created");
exit(1);
} 
else
{
printf("File has been successfully created");
} 
fputs("welcome to my college", fptr) ;
fclose(fptr) ;
return 0;
} 
