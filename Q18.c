/*
    START
        Accept number as No
        Divide No by 2
        If remainder is 0
            then print as Even
        otherwise
            print as Odd
    STOP
*/

#include<stdio.h>
int main()
{
    int no = 0;
    printf("Enter a number : ");
    scanf("%d",&no);

    if(no % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}