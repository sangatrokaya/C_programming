// C program to convert number of days to Years, Months and Days
#include<stdio.h>

int main ()
{
    int num_of_days, years, months, days;

    /* Reading number of days from user */
    printf("Enter number of days: ");
    scanf("%d", &num_of_days);

    /* Calculating years */
    years = num_of_days / 365;
    /* Calculating months */
    months = (num_of_days - (years * 365)) / 30;
    /* Calculating days */
    days = num_of_days - (years * 365) - (months * 30);

    /* Displaying results */
    printf("%d days = %d years %d months %d days", num_of_days, years, months, days);

    return 0;
}