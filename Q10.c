/*  Write a program to find a Area and Circumference of a Circle

Input :radius - 10
Output : Area = 314.00, Cicum = 62.80
*/

#include<stdio.h>

int main()
{
    float radius =0.0f, area = 0.0f, circumference = 0.0f;
    float PI = 3.14;

    printf("Enter the radius : ");
    scanf("%f",&radius);
    
    area = PI*radius*radius;

    printf("Area of Circle is : %f\n",area);
   
    circumference = 2*PI*radius;
    printf("Circumference of Circle is : %f\n",circumference);
   
    return 0;
}