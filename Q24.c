/*. 
Write a C program to find the largest of three numbers.

Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three

*/
#include<stdio.h>

int main()
{
    int no1,no2,no3;

    printf("Enter the 3 numbers : ");
    scanf("%d %d %d",&no1,&no2,&no3);

    printf("1st Number = %d,    2nd Number = %d,   3rd Number = %d\n", no1,no2,no3);

    if(no1 > no2 && no1 > no3)
    {
        printf("The 1st Number is the greatest among three. \n");
    }
    else if(no2 > no1 && no1 > no3)
    {
        printf("The 2nd Number is the greatest among three. \n");
    }
    else if(no3 > no2 && no3 > no1)
    {
        printf("The 3rd Number is the greatest among three. \n");
    }
    return 0;
}