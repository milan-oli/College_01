//Write a program to read a string using gets() and display using puts(). 

#include <stdio.h>

int main(){
    char str[50] ;

    printf("Enter a string : ");
    gets(str); // read a string from the console and store it in str
    puts(str); // print the string stored in str to the console

    return 0;
}