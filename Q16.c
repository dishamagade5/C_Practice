/* Write a program to convert centimeter into meter and kilometer*/

#include<stdio.h>
int main()
{
    float centimeter = 0.0, meter = 0.0, kilometer = 0.0;

    printf("Enter the centimeter value : ");
    scanf("%F",&centimeter);

    meter = centimeter / 100.0;
    kilometer = centimeter / 10000.0;

    printf("Meter value is : %.2f m\n",meter);
    printf("KiloMeter value is : %.2f km\n",kilometer);
    
    return 0;
}