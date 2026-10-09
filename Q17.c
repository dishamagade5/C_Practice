/* Write a program to print ASCII value */

#include<stdio.h>
int main()
{
    char ch = '\0';
    printf("Enter a character : ");
    scanf("%c",&ch);

    printf("ASCII value of character %c is %d \n",ch,ch);
    
    return 0;
}