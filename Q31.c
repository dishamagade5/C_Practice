
/*
Income tax_amt Practice
*/

#
/*
Income tax_amt Practice
*/

#include <stdio.h>

int main()
{
    double income = 0.0;
    double tax_amt = 0.0;

    printf("Enter your Income : ");
    scanf("%lf", &income);

    if(income <= 300000)
    {
        tax_amt = 0;
    }
    else if(income <= 500000)
    {
        tax_amt = (income - 300000) * 0.05;
    }
    else
    {
        tax_amt = (200000 * 0.05) +
                  ((income - 500000) * 0.10);
    }

    printf("Your tax_amt Amount : %.2lf\n", tax_amt);

    return 0;
}