#include <stdio.h>
#include <string.h>

void salt(char pass[]);
int main()
{
    char pass[] = "ishi";
    salt(pass);
    return 0;
}

void salt(char pass[])
{
    char newPass[100];
    char salt[] = "123";
    strcpy(newPass, pass);
    strcat(newPass, salt);
    printf("Salted password : %s", newPass);
}