//Write a program to read a l, b and h of a Cuboid and display its volume
#include<stdio.h>
int main(){
    float l, b, h, vol;
    printf("Enter a Breadth of cuboid : ");
    scanf("%f",&b);
    printf("Enter a Length of cuboid : ");
    scanf("%f",&l);
    printf("Enter a height of cuboid : ");
    scanf("%f",&h);

    vol = l * b * h ;

    printf("Volume of Cuboid is %.3f",vol);

    return 0;
}