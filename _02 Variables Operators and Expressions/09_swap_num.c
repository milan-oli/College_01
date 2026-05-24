
#include<stdio.h>

int main(){
    int a , b , temp;
    printf("Enter numbers a : ");
    scanf("%d",&a);
    printf("Enter numbers b : ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping : a = %d, b = %d", a, b);
    return 0;
}