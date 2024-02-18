// wap to add first n natural numbers
#include<stdio.h>
// #include<conio.h>

int main()
{
    int n, sum;
    printf("Enter the number of first natural numbers: ");
    scanf("%d", &n);
    sum = n * (n + 1)/2;
    printf("The sum of first %d natural numbers is %d.", n,sum);
    return 0; 
}