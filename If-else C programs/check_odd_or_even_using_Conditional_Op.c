// C program to Check whether number is Even or Odd using Conditional Operator
#include<stdio.h>

int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    /* Checking Even or Odd */
    num % 2 ? printf("ODD") : printf("Even");

    return 0;
}