/*
Write a C program to accept the height of a person in centimeters and categorize the person according to their height.

Test Data : 135
Expected Output : The person is Dwarf.
*/

#include<stdio.h>

int main()
{
    int height = 0;

    printf("Enter a height : ");
    scanf("%d",&height);

    if(height < 150)
    {
        printf(" The person is Dwarf.\n");
    }
    else if(height == 150)
    {
        printf(" The person is of Averheight Height.\n");
    }    
    else if(height >= 150)
    {
        printf(" The person is Tall.\n");
    }

    return 0;
}