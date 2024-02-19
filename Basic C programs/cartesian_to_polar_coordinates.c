// WAP to convert cartesian coordinates to polar coordinates

/*
To convert from Cartesian Coordinates (x,y) to Polar Coordinates (r,θ):
r = √ ( x2 + y2 )
θ = tan-1 ( y / x )
*/
#include<stdio.h>
#include<math.h>
#define PI 3.141592

int main () 
{
    float x, y, r, theta;
    printf("Enter cartesian coordinate x: ");
    scanf("%f", &x);
    printf("Enter cartesian coordinate y: ");
    scanf("%f", &y);

    /* Calculating r */
    r = sqrt (x *x + y*y);
    /* calculating theta in radian */
    theta = atan (y/x);
    /* Converting theta from radian to degree */
    theta = 180.0 * theta / PI;

    printf("Polar coordinate is: (%0.2f, %0.2f)", r,theta);

    return 0;
}
