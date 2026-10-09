
/*
Triangle 3 sides validation
*/

#include<stdio.h>

int main()
{
    int side1 = 0, side2 = 0, side3 = 0;

    printf("Enter the sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("Sides must be positive");
    }
    else if(side1 + side2 > side3 &&
            side1 + side3 > side2 &&
            side2 + side3 > side1)
    {
        printf("It is a valid triangle");
    }
    else
    {
        printf("It is an invalid triangle");
    }

    return 0;
}