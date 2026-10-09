/*
Windrwal System
*/

#include<stdio.h>

int main()
{
    double acc_balance = 0.0;
    int widrwal_amt = 0;

    printf("Enter a amount balance: \n");
    scanf("%lf",&acc_balance);

    printf("Enter a amount to be widraw : \n");
    scanf("%d",&widrwal_amt);

    if(widrwal_amt == 0 || widrwal_amt < 0)
    {
        return 1;
    }
    else if(widrwal_amt > acc_balance)
    {
        printf("Insufficient balance\n");
        return 1;
    }
    else if(widrwal_amt % 100 != 0)
    {
        printf("Please enter widrwal amount in multiples of 100\n");
        return 1;
    }
    else
    {
        printf("windrawl successfull");
        acc_balance = acc_balance - widrwal_amt;
    }
    printf("Account Balance : %lf",acc_balance);

    return 0;
}