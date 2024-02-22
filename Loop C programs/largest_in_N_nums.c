// C program to find largest among N numbers
// C program to find smallest among N numbers
#include<stdio.h>
int main ()
{
    int n, i;
    float s,  num;
    printf("How many numbers? : \n");
    scanf("%d", &n);
    printf("Enter number-1 : ");
    scanf("%f", &num);

    s = num;   /* Assume the first number is the smallest */
    i = 2;
    while (i <= n)
    {
        printf("Enter number-%d : ", i);
        scanf("%f", &num);
        if (num < s)
        {
            s = num;
        }
        i++;
    }
    printf("Smallest number is %0.2f", s);
    return 0;
}