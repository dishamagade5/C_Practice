/*Write a Program to make a simple calculator.

Input: Enter an operator (+, -, *, /): +
Enter operand 1: 7
Enter operand 2: 8

Output: 15.0

*/

#include<stdio.h>

int main()
{
    char operator = '\0';
    double no1 =0.0, no2 =0.0, Ans = 0.0;
 
    printf("Enter an operator (+, -, *, /):  ");
    scanf("%c",&operator);   
    printf("Enter operand 1: \n");
    scanf("%lf",&no1);
        
    printf("Enter operand 2: \n");
    scanf("%lf",&no2);


    switch(operator)
    {
        case '+' : 
            Ans = no1 + no2;
            break;
    
        case '-' : 
            Ans = no1 - no2;
            break;

        case '*': 
            Ans = no1 * no2;
            break;

        case '/': 
            Ans = no1 / no2;
            break;
    
        default :
            printf("Invalid operator");
    }  
    printf("%.2lf", Ans);
    return 0;
}