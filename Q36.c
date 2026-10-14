#include<stdio.h>

int main()
{
    int arr[]= {11,21,51,101,111,121,151,171};

    printf("%ld bytes\n",sizeof(arr)); // size of an array 20 bytes
    
    printf("%u \n",&arr);              // address of an array

    return 0;
}