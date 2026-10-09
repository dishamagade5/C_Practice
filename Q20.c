/*
Write a C program to check whether a given number is positive or negative.

Test Data : 15
Expected Output :
15 is a positive number
*/

#include<stdio.h>
int main()
{
    
    int no = 0;
    printf("Enter a number : ");
    scanf("%d",&no);

    if(no >= 0)
    {
        printf("Positive Integer \n");
    }
    else
    {
        printf("Negative Integer \n");
    }
    return 0;
}