//Write a program to calculate the volume of sphere of radius r. 
#include<stdio.h>
int main(){
    const float pi = 3.1415;
    float r , vol;
    printf("Enter radius of circle : ");
    scanf("%f",&r);
    vol = ( 4.0 / 3.0 ) * pi * (r * r * r);
    printf("Volume of Sphere is %.3f",vol);
    return 0;
}