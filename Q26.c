#include<stdio.h>

int main()

{
    int no = 0;

    printf("Enter a Number : ");
    scanf("%d",&no);

    if(no == 0)
    {
        printf("Number is Zero\n");
    }
    else if(no > 0)
    {
        printf("Number is Positive\n");
    }
    else if(no < 0)
    {
        printf("Number is Negative\n");
    }

    return 0;
}