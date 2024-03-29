// A program to initialize character at runtime
#include<stdio.h>

int main(){
    char array[20];

    // directly assign values to character array elements
    array[0] =  'A';
    array[1] = 'd';
    array[2] = 'm';
    array[3] = 'i';
    array[4] = 'n';
    array[5] = '\0';

    // display the initialized array
        printf("%s\n", array);
 
    return 0;
}