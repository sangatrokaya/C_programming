// WAP to find Square Root, Logarithmic Value and Exponential Value of given number

#include<stdio.h>
#include<math.h>

int main()
{
    float sqRt, lg, lg10, ex, num; /* variables declaration */
    printf("Enter a number: ");
    scanf("%f", &num);                  /* taking input from user */

    sqRt = sqrt (num);
    lg = log (num);
    lg10 = log10 (num);
    ex = exp (num);

    printf("Square root of %f is %0.2f \n", num, sqRt);
    printf("Natural log of %f is %0.2f \n", num, lg);
    printf("Log base 10 of %f is %0.2f \n", num,lg10);
    printf("Exponential value of %f is %0.2f", num,ex);

    return 0;
    
}