//This example illustrates different format specifications for printing characters. 
#include <stdio.h>  
void main() 
{ 

char ch= 'a'; 
printf("\nCase 1 = %c", ch);  
printf("\nCase 2 = %10c", ch); 
printf("\nCase 3 = %-10c", ch);

}