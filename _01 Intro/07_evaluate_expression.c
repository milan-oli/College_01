/*
    Write a program to read values of x and y from the user and evaluate the expression 
     x^3 + y^2 - 100/x
*/
#include<stdio.h>
int main(){
    float result , x , y;
    printf("Enter value of X : ");
    scanf("%f",&x);
    printf("Enter value of Y : ");
    scanf("%f",&y);
    if( x == 0){
        printf("The value of X should not be 0\n");
        return 1;
    }
    result = ( x * x * x ) + ( y * y ) - ( 100 / x );
    printf("Ans = %.3f",result);
    return 0;
}
