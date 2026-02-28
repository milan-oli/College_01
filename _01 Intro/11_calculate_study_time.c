/*
    Write a program to read time given for C programming study a day at your home in hours. 
    minutes and seconds and display the total time in seconds in 30 days. 
*/
#include<stdio.h>
int main(){
    int hour , min , sec ;
    printf("***** C programming study time in a day *****\n");

    printf("Enter Hour : ");
    scanf("%d",&hour);

    printf("Enter Minutes : ");
    scanf("%d",&min);

    printf("Enter Seconds : ");
    scanf("%d",&sec);

    sec = 30 * (( hour * 60 * 60 ) + ( min * 60 ) + sec) ;

    printf("Total time in seconds in 30 days = %d\n",sec);
    return 0;
}