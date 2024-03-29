// A program to initialize character or string array at compile time
#include<stdio.h>

int main(){
    // initialize character array during compile time
    char str[] = {'a','d','m','i','n','\0'};
    char str1[] = "Hello, World!";

    // display the initialized string
    printf("%s\n", str);
    printf("%s\n", str1);


    // // determine the size of the array
    int size = sizeof(str)/sizeof(str[0]);
    int size1 = sizeof(str1)/sizeof(str1[0]);

    printf("%d\n", size);  // output: 14 (including null terminator)
    printf("%d", size1);  // output: 14 (including null terminator)


    // // initialize array during compile time
    // int array[] = {10,20,30,40,50};

    // // determine the size of the array
    // int size = sizeof(array)/sizeof(array[0]);
    
    // // display the initialized array
    // for (int i = 0; i < size; i++) {
    //     printf("%d", array[i]);
    // }
    // printf("\n");
    
    return 0;
}