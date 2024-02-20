// C program to check whether a number is positive, zero or negative

#include<stdio.h>

int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("%d is ZERO.", num);
    }
    else if (num > 0)
    {
        printf("%d is POSITIVE.", num);
    }
    else
    {
        printf("%d is NEGATIVE.", num);
    }
    return 0;
}