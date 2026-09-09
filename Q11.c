/* Write a program to convert the temperature from degree centrigrade to Fahrenheit

Input : 32c
ouput : 89.599
*/

#include<stdio.h>

int main()
{
    float temperature,celcius,fahrenheit;

    printf("Enter the tempearture in Celcius : \n");
    scanf("%f",&temperature);

    celcius =  temperature;

    fahrenheit = (1.8 * celcius) + 32;

    printf("Tempearture in Farenheit is : %f\n",fahrenheit);

    return 0;
}