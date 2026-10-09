/*

Cehcking character input as it is vowel or consonant
*/
#include <stdio.h>

int main() 
{

    char ch = '\0';

    printf("Enter a chracater :");
    scanf("%c",&ch);

    if(ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A'|| ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U' )\
       {
        printf("%c is vovwel\n",ch);
       }
       else
       {
        printf("%c is consonant\n",ch);
       }

    return 0;
}