//Type the following program and run with different input.  
#include<stdio.h> 
void main() 
{ 
    int s, a, b, c=20 ;  /* variable declaration*/ 
    printf("Enter value of a : ");  /* to display message on the screen*/
    scanf("%d",&a) ; /* to give value of a */ 
    printf("Enter value of b : "); /* to display message on the screen */ 
    scanf("%d",&b); /* to give values of b */
    s = a + b + c ; /* processing */ 
    printf("Sum = %d",s);  /* to display value stored at s */ 
} 