/*
Write a program to read a character using getche(),getch() and getchar() and display using 
putch()/putchar().
*/
#include <stdio.h>
#include <conio.h>

int main(){

    char ch1, ch2, ch3 ;

    printf("Enter three characters 1 : ");
    ch1 = getchar(); // read a character from the console and store it in ch1
    printf("Enter three characters 2 : ");
    ch2 = getche(); // read a character from the console and store it in ch2, and echo it to the console
    printf("\nEnter three characters 3 : ");
    ch3 = getch(); // read a character from the console and store it in ch3, but do not echo it to the console

    printf("\nYou entered the characters 1 : ");
    putchar(ch1); // print the character stored in ch1 to the console
    printf("\nYou entered the characters 2 : ");
    putch(ch2); // print the character stored in ch2 to the console
    printf("\nYou entered the characters 3 : ");
    putchar(ch3); // print the character stored in ch3 to the console

    return 0;
}