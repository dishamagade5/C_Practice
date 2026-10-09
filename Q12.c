/* Write a program to calculate simple interest*/

#include<stdio.h>
int main()
{
    float SI=0.0 , principal_amt =0.0, time=0.0, rate=0.0;

    printf("Enter the principal amount : \n");
    scanf("%f",&principal_amt);

    printf("Enter the time : \n");
    scanf("%f",&time);

    printf("Enter the principal amount : \n");
    scanf("%f",&rate);

    SI = (principal_amt*time*rate)/100;

    printf("Simple Interest is  =  %f\n",SI);
    return 0;
}