//Write a program to calculate the larger among two numbers using conditional operator.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int larger = (a>b) ? a : b; // conditional operator
    printf("Larger number is: %d", larger);
    return 0;
}