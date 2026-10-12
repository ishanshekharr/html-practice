#include <stdio.h>

void india();
void french();

int main()
{
    printf("enter 0 for indian and 1 for french : ");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 0:
        india();
        break;
    case 1:
        french();
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}

void india()
{
    printf("namaste !!");
}

void french()
{
    printf("Bonjour !!");
}