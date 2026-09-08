/*Write a Program to calculate Compound Interest.

Input: Enter Principal (amount): 1200
Enter Time: 2
Enter Rate: 5.4

Output: Compound Interest is: 133.099243*/

#include<stdio.h>
#include <math.h>

int main()
{
    double amount = 0.0,time = 0.0f,rate = 0.0f;

    double A= 0.0, CI= 0.0;

    printf("Enter the Principal amount : ");
    scanf("%lf",&amount); 
    
    printf("Enter the time : ");
    scanf("%lf",&time);
    
    printf("Enter the rate amount : ");
    scanf("%lf",&rate);


    A = amount * ((pow((1 + rate/100),time)));

    CI = A - amount;

    printf("Compound Interest is : %lf",CI);
    return 0;
}