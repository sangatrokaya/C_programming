// WAP to calculate the monthly EMI
/* Tips:
EMI is calculated using following formula:

EMI = p * r * (1+r)n/((1+r)n-1)

Where:
p = Principal or Loan Amount
r = Interest Rate Per Month
n = Number of monthly installments

If the interest rate per annum is R% then interest rate per month is calculated using:
Monthly Interest Rate (r) = R/(12*100)
 */

#include<stdio.h>
#include<math.h>

int main()
{
    float p, R, r, emi;
    int n;

    /* Reading inputs */
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter annual interest rate: ");
    scanf("%f", &R);
    printf("Enter number of months: ");
    scanf("%d", &n);

    /* Calculating interest rate per month */
    r = R / (12 * 100);

    /* Calculating equated monthly installment (EMI) */
    emi = p * r * pow(1+r, n) / (pow(1+r, n) - 1);

    printf("Monthly EMI: %f", emi);

    return 0;
}