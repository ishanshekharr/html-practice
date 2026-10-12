#include <stdio.h>

void print(char arr[]);
int main()
{
    // char firstName[] = "Ishan";
    // char lastName[] = "Shekhar";

    // print(firstName);
    // printf(lastName);

    char name[40];
    // gets(name);
    fgets(name, 100, stdin);
    puts(name);
    return 0;
}

// function to print string using loops
void print(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}