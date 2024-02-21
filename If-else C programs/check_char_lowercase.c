// C program to check whether a character is lowercase or not
/*
-> Check whether ASCII value of given character falls in the range if lowercase character or not i.e 97-122 
-> char data type stores ASCII value (number) behind the scene. So we can compare directly with number
*/
#include<stdio.h>

int main ()
{
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("%c is LOWERCASE.", ch);
    }
    else
    {
        printf("%c is NOT LOWERCASE.", ch);
    }
    return 0;
}