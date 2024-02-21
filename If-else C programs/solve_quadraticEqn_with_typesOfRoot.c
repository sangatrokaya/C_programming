// C program to solve quadratic equations along with types of Root
/*
The standard form of a quadratic equation is:
ax2 + bx + c = 0, where
a, b and c are real numbers and
a != 0

The term b2; - 4ac is known as the discriminant of a quadratic equation. It tells the nature of the roots.

--> If the discriminant is greater than 0, the roots are real and different.
--> If the discriminant is equal to 0, the roots are real and equal.
--> If the discriminant is less than 0, the roots are complex and different.

*/
#include<stdio.h>
#include<math.h>

int main ()
{
    /* Variables declarations */
    float a, b, c, d, r1, r2, rp, ip;
    printf("Enter coefficients a, b, and c: \n");
    scanf("%f%f%f", &a, &b, &c);

    /* Calculate the discriminant of quadratic eqn */
    d = b*b - 4*a*c;

    /* Condition for real and different roots */
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root1 = %0.2f \n", r1);
        printf("Root2 = %0.2f", r2);
    }
    /* Condition for real and equal roots */
    else if (d == 0) {
        r1 = -b / (2 * a);
        r2 = r1;
        printf("Roots are real and equal.\n");
        printf("Root1 = %0.2f \n", r1);
        printf("Root2 = %0.2f ", r2);
    }
    /* Condition for complex roots which are imaginary */
    else {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("Roots are complex and imaginary in nature.\n");
        printf("Root1 = %0.2f + %0.2f i \n", rp, ip);
        printf("Root2 = %0.2f - %0.2f i ", rp, ip);
    }
    return 0;
}