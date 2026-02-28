//Write a program to calculate the area and circumference of a circle of radius r.
#include<stdio.h>

int main(){
    const float pi = 3.1415;
    float r,area,circum;
    printf("Enter radius of circle : ");
    scanf("%f",&r);
    area = pi * (r * r) ;
    circum = 2 * pi * r;
    printf("Area of Circle = %.3f\n",area);
    printf("Circumference of Circle = %.3f\n",circum);
    
    return 0;
}