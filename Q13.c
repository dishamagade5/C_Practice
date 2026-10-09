/* Write a program to calculate Area and perimeter of Rectangle*/

#include<stdio.h>
int main()
{
    float area = 0.0, perimeter = 0.0, length = 0.0, breadth = 0.0;

    printf("Enter the Length of Rectangle  : \n");
    scanf("%f",&length );

    printf("Enter the Breadth of Rectangle : \n");
    scanf("%f",&breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of Rectangle is  =  %f\n",area);
    printf("Perimeter of Rectangle is  =  %f\n",perimeter);
    return 0;
}