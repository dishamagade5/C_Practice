#include<stdio.h>

int main()
{
    int arr[5];

    printf("%ld bytes\n",sizeof(arr)); // size of an array
    
    printf("%u \n",&arr);              // address of an array

    return 0;
}