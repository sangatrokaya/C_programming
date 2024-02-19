// WAP to convert kilometer into meter
#include<stdio.h>

int main ()
{
    float km, m;
    printf("Enter distance in kilometer: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("%0.3f kilometer = %0.3f meter", km,m);

    return 0;
}