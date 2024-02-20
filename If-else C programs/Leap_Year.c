// C program to check whether a given year is Leap year or not
/*
Leap year  occurs every 4 years but there are some exceptions:
1. If the year is divisible by 100, then it is not a leap year, unless…
2. The year is also divisible by 400. Then it is a leap year.
For example, the year 2000 was a leap year because it is divisible by both 100 and 400.
*/
#include<stdio.h>

int main ()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a Leap year.", year);
    }
    else
    {
        printf("%d is not a Leap year.", year);
    }
    return 0;
}
