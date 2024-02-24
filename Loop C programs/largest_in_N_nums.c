// C program to find largest among N numbers
#include<stdio.h>
int main ()
{
    int n, i;
    float lg,  num;
    printf("How many numbers? : \n");
    scanf("%d", &n);
    printf("Enter number-1 : ");
    scanf("%f", &num);

    lg = num;   /* Assume the first number is the smallest */
    i = 2;
    while (i <= n)
    {
        printf("Enter number-%d : ", i);
        scanf("%f", &num);
        if (num > lg)
        {
            lg = num;
        }
        i++;
    }
    printf("Largest number is %0.2f", lg);
    return 0;
}