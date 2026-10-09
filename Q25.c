/*
Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.

*/
#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter a x and y co-ordinate : ");
    scanf("%d %d",x,y);

    if(x > 0 && y > 0)
    {
        printf("The coordinate point (%d.%d) lies in the First quadrant.");
    }
    else if()
    return 0;
}