// WAP to convert Polar coordinate into Cartesian coordinate

/*
To convert from Polar Coordinates (r,θ) to Cartesian Coordinates (x,y) :
x = r × cos( θ )
y = r × sin( θ )
*/

#include<stdio.h>
#include<math.h>
#define PI 3.141592

int main ()
{
    float x, y, r, theta; /* variables declaration */
    printf("Enter the value of r: ");
    scanf("%f", &r);
    printf("Enter the value of theta: ");
    scanf("%f", &theta);

    /* converting theta from degree to radian */
    theta = theta * PI/180.0;

    /* calculating cartesian coordinate x */
    x = r * cos(theta);
    /*  calculating cartesian coordinate y */
    y = r * sin(theta);

    printf("Cartesian coordinates is: (%0.3f, %0.3f)", x,y);
    return 0;
}