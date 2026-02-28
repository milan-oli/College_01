/*
     Write a program to read price of two pens and five copies of same type and calculate the price 
    after discounting 10%.
*/
#include<stdio.h>
int main(){

    float pen , copy , price , price_dis ;

    printf("Enter price of a pen : ");
    scanf("%f",&pen);

    printf("Enter price of a copy : ");
    scanf("%f",&copy);

    price = (2 * pen) + (5 * copy);

    price_dis = price - (price * 0.1);

    printf("Price after discount is %.3f\n",price_dis);

    return 0;
}