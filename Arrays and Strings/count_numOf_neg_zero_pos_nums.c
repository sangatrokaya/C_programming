// program to count number of negative, zero and positive numbers
#include <stdio.h>

int main()
{
    int a[50], n, count_neg = 0, count_zero = 0, count_pos = 0, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count_neg++;
        }
        else if (a[i] > 0)
        {
            count_pos++;
        }
        else
        {
            count_zero++;
        }
    }
     printf("There are %d -ve numbers in the array.\n", count_neg);
        printf("There are %d zeros in the array.\n", count_zero);
        printf("There are %d +ve numbers in the array.", count_pos);
    return 0;
}