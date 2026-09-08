/* Write a Program to check if the given number is Even or Odd.
Input: Enter a Number: 2

Output: even
*/

#include<stdio.h>

int main()
{

    int no = 0,Ans = 0;

    printf("Enter the number : ");
    scanf("%d",&no);

    if(no % 2 == 0)
    {
        printf("Even");
    }
    else
    {        
        printf("Odd");
    }
    return 0;

}