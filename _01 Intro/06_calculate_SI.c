//Write a program to calculate the simple interest. Read values of P, T, R from the user. 
#include<stdio.h>
int main(){
    float si , p , r , t;
    printf("Enter Principle amount : ");
    scanf("%f",&p);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time in year : ");
    scanf("%f",&t);
    si = (p * t * r)/100;
    printf("Simple interest = %.3f",si);
    return 0;
}