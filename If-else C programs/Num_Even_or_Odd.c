// C program to check whether a given positive integer is Even or Old
#include<stdio.h>

void main ()
{
    int num;
    printf("Enter positive integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even.", num);
    }
    else
    {
        printf("%d is odd.", num);
    }
    getch();
}