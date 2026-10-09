/*
Shopping Discount Calculator
*/

#include<stdio.h>
int main()
{
    double amount = 0.0 , final_amount = 0.0 , Discount= 0.0;

    printf("Enter a amount : ");
    scanf("%lf",&amount);

    if(amount < 5000)
    {
        final_amount = amount;
        printf("No Discount");
    }
    else if(amount >= 5000 && amount < 10000)
    {
        Discount = amount * 0.1;
        final_amount = amount - Discount;
    }
    else if(amount >= 10000)
    {
        Discount = amount * 0.2;
        printf("%lf",Discount);
        final_amount = amount - Discount;
    }

    printf("Discount Amount : %.2lf\n", Discount);
    printf("Final amount to be paid : %.2lf\n", final_amount);    return 0;
}