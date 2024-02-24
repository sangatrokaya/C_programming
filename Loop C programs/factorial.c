// C program to find the factorial of a given number from user
#include<stdio.h>
int main ()
{
    long int i, n, f=1;
    printf("Enter any number: ");
    scanf("%ld", &n);

    /* finding factorial */
    for (i=1; i<=n; i++)
    {
        f = f * i;
    }
    printf("Factorial of %ld = %ld", n, f);
    return 0;
}