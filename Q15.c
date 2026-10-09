/* Write a program to convert days into years,weeks and days*/

#include<stdio.h>
int main()
{
    int weeks =0, years = 0, total_days = 0;

    printf("Enter the number of days : ");
    scanf("%d",&total_days);

    /*
        week = day * 7;
        year = day * 365;
    */

    years = total_days / 365; 

    weeks = (total_days % 365) / 7; 

    total_days = (total_days % 365) % 7; 

    printf("Years : %d\n", years);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d\n", total_days);

    return 0;
}