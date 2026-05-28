//This example shows the concept of defining search set to read strings. 
#include <stdio.h>
void main(){

    char str1[50], str2[50];

     printf("Enter a string : ");
     scanf("%[^M]", str1); // read a string until the character 'M' is encountered
     printf("The read string is : %s", str1);

     getchar(); // consume the newline character left in the input buffer

     printf("\nHow old are you ? : ");
     scanf(" %[a-z0-9]", str2); // read a string until a character that is not a lowercase letter or digit is encountered
     printf("Your age is : %s", str2);

}