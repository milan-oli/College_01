//This example illustrates the concept of reading strings using %wc format specification.  
#include <stdio.h>
void main() 
{ 

char str[50]; 
printf("Enter a string:"); 
scanf("%10c",str); 
printf("Read string is: %s", str);

}