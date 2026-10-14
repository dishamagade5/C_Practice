#include<stdio.h>

int main()
{
    int arr[3];     // array declaration

    arr[2] = 10;
    arr[0] = 20;
    arr[1] = 30;

    printf("%ld bytes\n",sizeof(arr)); // size of an array 20 bytes
    
    printf("%u \n",&arr);              // address of an array

    return 0;
}