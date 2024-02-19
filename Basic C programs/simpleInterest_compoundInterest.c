// C program to calculate Simple Interest and Compound Interest

/*
Simple Interest = (P*T*R)/100

Compound Interest = P * ( (1+r/100 )t - 1)
*/

#include<stdio.h>
#include<math.h>

int main ()
{
    float p, t, r, si, ci; /* variable declaration */
    printf("Enter principal (p): ");
    scanf("%f", &p);
    printf("Enter time in year (t): ");
    scanf("%f", &t);
    printf("Enter rate in percentage (r): ");
    scanf("%f", &r);

    /* calculation of SI */
    si = (p * t * r) / 100;
    /* calculation of CI */
    ci = p * (pow(1 + r/100, t) - 1);

    printf("Simple Interest (SI) = %0.3f\n", si),
    printf("Compound Interest (CI) = %0.3f", ci);

    return 0;
}