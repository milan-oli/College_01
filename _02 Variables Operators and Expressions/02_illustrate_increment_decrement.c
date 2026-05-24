//A program to illustrate increment and decrement operator.
#include <stdio.h> 
#include<conio.h> 
void main()  
{ 
int num = 5, result; 
num = ++num + num-- - --num + num++ * num++; 
result = num++ + num++; 
printf("result=%d,num=%d", result,num); 
}