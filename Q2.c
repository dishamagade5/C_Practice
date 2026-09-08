/*Input: Enter two numbers A and B : 5  2

Output: Sum of A and B is:  7*/

#include<stdio.h>

int main()
{
    int A = 0, B = 0, Ans = 0;

    printf("Enter the first number : \n");
    scanf("%d",&A);

    printf("Enter the second number : \n");
    scanf("%d",&B);

    Ans = A + B;

    printf("Sum of A and B is : %d",Ans);

    return 0;
   
}

