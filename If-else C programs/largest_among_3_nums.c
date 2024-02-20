// C oprogram to find the largest from three numbers
#include<stdio.h>

int main () {
    float a, b, c, lg; /* variable declarations */
    printf("Enter three numbers:\n");
    scanf("%f%f%f", &a,&b,&c);
    // if (a > b && a > c)
    //     printf("%0.2f is the largest number", a);
    // else if(b > a && b > c)
    // printf("%0.2f is the largest number", b);
    // else  
    //     printf("%0.2f is the largest number", c); 
    //  return 0;

    /* Alternative way */
    lg = a;

    if (b > lg)
    {
        lg = b;
    }

    if (c > lg)
    {
        lg = c;
    }

    printf("Largest number = %0.2f", lg);
    
    return 0;
        

}