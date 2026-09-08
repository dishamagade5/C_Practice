/* Write a Program to find the largest number among three numbers.

Input: Enter a Number1: 5
Enter a Number2: 50
Enter a Number3: 10

Output: Largest number is: 50
*/

#include<stdio.h>

int main()
{
    int no1 =0, no2 = 0, no3 =0;

    printf("Enter the 1st number : ");
    scanf("%d",&no1);

    printf("Enter the 2nd number : ");
    scanf("%d",&no2);
    
    printf("Enter the 3rd number : ");
    scanf("%d",&no3);
    
    if(no1 > no2 && no1 > no3)
    {
        printf("Largest number is : %d",no1);
    }
    else if(no2 > no1 && no2 > no3)
    {
        printf("Largest number is : %d",no2);

    }
    else if(no3 > no1 && no3 > no1)
    {
        printf("Largest number is : %d",no3);

    }
    return 0;
}