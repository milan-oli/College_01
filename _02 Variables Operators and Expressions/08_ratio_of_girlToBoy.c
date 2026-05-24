/* Write a program to read number of girls and boys in your class and display the ratio of girls to 
boys. [Note the count of girls and boys can’t be float] */

#include<stdio.h>
int main(){
    int boys, girls;
    float ratio;
    printf("Enter number of boys and girls : ");
    scanf("%d%d",&boys,&girls);

    ratio = (float)girls / (float)boys; // type casting to get accurate ratio
    printf("Ratio of girls to boys is : %.2f", ratio); // printing ratio with 2 decimal places
    
    return 0;
}