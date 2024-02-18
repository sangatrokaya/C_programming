// wap to add 2 numbers
#include<stdio.h>

int main()
{
    int a, b, sum;  /* variables declaration */
    printf("Enter the value of a: ");
    scanf("%d", &a); /* reading first number */
    printf("Enter the value of b: ");
    scanf("%d", &b); /* reading second number */
    sum = a + b;      /* calculating the sum   */
    printf("Sum of %d and %d is %d.", a,b,sum);
    return 0;
}

/* Note: If you are using compiler other than Turbo C 
      then you do not need clrscr(), getch() and 
      #include<conio.h> */