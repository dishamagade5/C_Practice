/* Write a program to find sum of two numbers 

Input : 5 6
Output : Sum : 11
*/

#include<stdio.h>

int main()
{
    int no1 =0, no2=0, sum =0;

    printf("Enter two numbers : ");
    scanf("%d %d",&no1,&no2);

    sum = no1 + no2;

    printf("Sum : %d",sum);
    return 0;
}