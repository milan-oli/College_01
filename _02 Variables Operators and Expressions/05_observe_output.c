//Type, run and observe the output of the following program.
#include<stdio.h> 
void main() 
{ 
float a;  
char b;  
long int c;  
unsigned int e;
printf("Enter value of a : "); 
scanf("%f", &a); 
printf("Enter value of b : "); 
scanf(" %c",&b); 
/*[Note: put space before %c] , Why?*/ 
printf("Enter value of c and e : "); 
scanf("%ld%u",&c,&e); 
printf("Value of a : %f\nValue of b : %c\nValue of c : %ld\nValue of e : %u",a,b,c,e); 
} 