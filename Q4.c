/* Write a Program to Swap the values of two variables.
Input: Enter Value of x: 5
Enter Value of y: 10

Output: After Swapping: x = 10, y = 5
*/
#include<stdio.h>

int main()
{
    int x =0, y=0,temp =0;

    printf("Enter the 1st number : ");
    scanf("%d",&x);
    
    printf("Enter the 2nd number : ");
    scanf("%d",&y);

    temp = x;
    x= y;
    y = temp;

    printf("After swapping : %d %d", x,y);

    return 0;
}
