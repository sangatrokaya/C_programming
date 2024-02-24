// C program to find the sum and average of N numbers
#include<stdio.h>
int main ()
{
    int n, i;
    float num, sum = 0, avg;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Enter number-%d: ", i);
        scanf("%f", &num);
        sum = sum + num;
    }
    avg = sum / n;
    printf("Sum = %0.2f \n", sum);
    printf("Average = %0.2f", avg);
    return 0;
    
}