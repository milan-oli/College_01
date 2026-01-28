/*Write a program to print a multiplication table of M X N. Read values of M
and N from the user. */

#include <stdio.h>
int main()
{
    int m, n;

    positive:
    // Taking value of M from user
    printf("Enter a number M : ");
    scanf("%d", &m);

    // Taking value of M from user
    printf("Enter a number N : ");
    scanf("%d", &n);

    // Input validation
    if(m<=0 || n<=0){
        printf("Try again !! Enter positive (greater than Zero) for both M and N.\n");
        goto positive;
    }

    printf("multiplication table of %d X %d\n\n", m, n);

    // using loop for making a multiplication table
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}