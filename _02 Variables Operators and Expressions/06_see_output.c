//Type the following program and run and see the output.  
#include<stdio.h> 
void main() 
{ 
int s, a,b; /* variable declaration */ 
float p; 
printf("Address of s is %x", &s); /* to know the memory address of variable s */  
printf(" \n Address of a is %x", &a); 
printf("\n\n Occupied number of bytes by Variable s is %d", sizeof(s));  
/* sizeof is an operator. It returns the size occupied by any variable or data*/ 
printf("\n\n \n Size of a %d", sizeof(a));  
printf("\n\n\n\n Size of 1.5 is %d",sizeof(1.5)); 
printf("\n\n\n\n\n Size of float data type is %d", sizeof(float)); 
} 