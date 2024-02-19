// C program to read a character and displaying its ASCII value
/*
ASCII stands for American Standard Code for Information Interchange.
Computers only understand numbers.
ASCII code is Numeric representation of character such as 'a', 'A', '+' etc.
Original ASCII code are of 7 bit long and extended ASCII code are of 8 bit long.
For examples: J --> 74, p --> 112, + --> 43, 7 --> 55 etc.
*/

#include<stdio.h>

int main ()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d", ch, ch);
    return 0;
}