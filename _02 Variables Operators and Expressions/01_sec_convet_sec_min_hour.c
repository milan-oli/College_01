
//A program that inputs seconds as input and converts to hours, minutes and seconds format. 

#include<stdio.h> 
void main()
{ 
int seconds, min,hours; 
printf("Enter number of seconds:"); 
scanf("%d", &seconds); 
hours=seconds/(60*60);/* integer division */ 
min= (seconds%(60*60)) /60; /* integer division */ 
seconds=(seconds%(60*60)) %60; /*integer division */ 
printf("\nHours=%d", hours); 
printf("\nMinutes=%d", min); 
printf("\nSeconds=%d", seconds);
} 