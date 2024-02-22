// C program to convert lowecase character to uppercase character
#include<stdio.h>

int main ()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch -32;
        printf("Uppercase character is %c", ch);
    }
    else
    {
        printf("It is already uppercase character.");
    }
    return 0;
}