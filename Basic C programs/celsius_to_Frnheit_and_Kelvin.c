// C program to convert Temperature given in Celsius to Fahrenheit and Kelvin

/*
Tips:
Fahrenheit = 1.8 * Celsius + 32

Kelvin = 273.15 + Celsius
*/

#include<stdio.h>

int main ()
{
    float celsius, fahr, kelvin; /* variables declaration */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius); 

    fahr = 1.8 * celsius + 32;
    kelvin = 273.15 + celsius;

    printf("%0.2f Celsius = %0.2f Fahrenheit\n", celsius,fahr);
    printf("%0.2f Celsius = %0.2f Kelvin", celsius,kelvin);

    return 0;
}