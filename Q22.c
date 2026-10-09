/*Signum Function Implementation

Write a C program to read the value of an integer m and 

display the value of n is 1 when m is larger than 0, 

0 when m is 0 and 

-1 when m is less than 0.

Test Data : -5
Expected Output :
The value of n = -1
*/

#include<stdio.h>

int main()
{
    int no = 0, m = 0;

    printf("Enter a number : ");
    scanf("%d",&no);
    
    if(no > 0)
    {
        m = 1;
        printf("%d\n",m);
    }
    else if(no == 0)
    {
        printf("%d\n",m);
    }
    else if(no < 0)
    {
        m = -1;
        printf("%d\n",m);
    }
    return 0;
}