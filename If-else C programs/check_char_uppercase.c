// C program to check whether a character is uppercase or not
/*
-> Check whether ASCII value of given character falls in the range if uppercase character or not i.e 65-90 
-> char data type stores ASCII value (number) behind the scene. So we can compare directly with number
*/
#include<stdio.h>

int main () 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("%c is UPPERCASE.", ch);
    }
    else
    {
        printf("%c is NOT UPPERCASE.", ch);
    }
    return 0;
}