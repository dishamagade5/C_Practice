
#include <stdio.h>
#include <string.h>

int main()
{
    char user_Name[20] = "John doe";
    char password[12] = "john@123";

    char user_Name2[20];
    char password2[12];

    printf("Enter user name : ");
    scanf(" %19[^\n]", user_Name2);

    printf("Enter password : ");
    scanf("%11s", password2);

    if(strcmp(user_Name, user_Name2) == 0 &&
       strcmp(password, password2) == 0)
    {
        printf("Login Sucessfull");
    }
    else
    {
        printf("Invalid login");
    }

    return 0;
}