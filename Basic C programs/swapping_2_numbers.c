// C program to Swap two numbers using Temporary variable

#include<stdio.h>

int main ()
{
    int a ,b , temp;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d and b = %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d and b = %d", a, b);
    return 0;
}