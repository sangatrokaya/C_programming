// WAP to calculate the area and circumference of circle

#include<stdio.h>
#define PI 3.141592

int main()
{
    float rd, area, circum;
    printf("Enter the radius of circle: ");
    scanf("%f", &rd);
    area = PI * rd * rd;
    circum = 2 * PI * rd;
    printf("Area of circle = %f\n", area);
    printf("Circumference of circle = %f", circum);
    return 0;
}