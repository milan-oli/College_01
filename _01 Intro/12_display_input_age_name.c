//Write a program to read name and age of a person and display them. 
#include<stdio.h>
int main(){
    int age;
    char name[50];

    printf("Enter Your name : ");
    scanf("%[^\n]",name);

    printf("Enter Your age : ");
    scanf("%d",&age);

    printf("Hi %s, you are %d years old.\n",name,age);

    return 0;
}