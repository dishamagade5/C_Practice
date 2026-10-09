/*
 Write a C program to find whether a given year is a leap year or not.

    Test Data : 2016
    Expected Output :
    2016 is a leap year.

*/

#include<stdio.h>

int main()
{
    int year = 0;

    printf("Enter a year : ");
    scanf("%d",&year);

    if(year % 4 && year % 400 || year % 100)\
    {
        printf("%d is a leap year.\n",year);
    }
    else
    {
        printf("%d is NOT a leap year.\n",year); 
    }
    return 0;
}