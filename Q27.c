/*
Find the Largest of Two Numbers

Example:

Enter two numbers: 25 18
Largest = 25
*/

#include<stdio.h>

int main()

{
    int no1 = 0, no2 =0;

    printf("Enter the 2 numbers : ");
    scanf("%d %d",&no1,&no2);

    if(no1 > no2)
    {
        printf("%d is a greater number \n",no1);
    }
    else if(no2 > no1)
    {
        printf("%d is a greater number\n ",no2);
    }
    
    return 0;
}