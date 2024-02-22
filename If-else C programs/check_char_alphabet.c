// C program to check whether a character is Alphabet or not
#include<stdio.h>
 int main ()
 {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= "z") || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is Alphabet.", ch);
    }
    else
    {
        printf("%c is not Alphabet.", ch);
    }
    return 0;
 }