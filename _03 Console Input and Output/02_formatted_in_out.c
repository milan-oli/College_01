// Write a program to read a character and a string using scanf() and display using printf(). 
#include<stdio.h>

int main(){
    char ch , str[50] ;

    printf("Enter a character : ");
    scanf("%c", &ch); // read a character from the console and store it in ch
    printf("Enter a string : ");
    scanf("%s", str); // read a string from the console and store it in str
    printf("You entered the character : %c\n", ch); // print the character stored in ch to the console
    printf("You entered the string : %s\n", str); // print the string stored in str to the console

    return 0;
}