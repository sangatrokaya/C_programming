// C program to check whether a charcter is vowel or not
#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    /* conveting character to lowercase it in uppercase */
    ch = ch >= 'A' && ch <= 'Z' ? (ch + 32) : ch;

    /* Making decision */
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is Vowel.", ch);
    }
    else
    {
        printf("%c is Consonant.", ch);
    }
    return 0;
}