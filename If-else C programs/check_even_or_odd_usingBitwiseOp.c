// C program to check whether Number is Even or Odd using Bitwise Operator
#include<stdio.h>

int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    /* Checking Even or Odd */
    if (num & 1)
    {
        printf("%d is Odd.", num);
    }
    else
    {
        printf("%d is Even.", num);
    }
    return 0;
}