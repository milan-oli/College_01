//Write a program to read four integers from the user and display mean of the numbers. 
#include<stdio.h>
int main(){
    int n1, n2, n3, n4;
    float mean;
    printf("Enter Number 1 : ");
    scanf("%d",&n1);
    printf("Enter Number 2 : ");
    scanf("%d",&n2);
    printf("Enter Number 3 : ");
    scanf("%d",&n3);
    printf("Enter Number 4 : ");
    scanf("%d",&n4);

    mean = (n1 + n2 + n3 + n4) / 4.0;

    printf("Mean of the 4 number = %.3f\n", mean);

    return 0;
}