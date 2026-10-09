/*
   Write a C program to accept two integers and check whether they are equal or not.
    
    Test Data : 15 15
    Expected Output :
    Number1 and Number2 are equal
*/

#include<stdio.h>
int main()
{
    int no1 = 0, no2 = 0;
    
    printf("Enter a number : ");
    scanf("%d",&no1);

    printf("Enter a number : ");
    scanf("%d",&no2);

    if(no1 == no2)
    {
        printf(" Number1 and Number2 are equal\n");
    }
    else
    {
        printf(" Number1 and Number2 are NOT equal\n");
    }
    return 0;
}