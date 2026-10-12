#include <stdio.h>

// function declaration
void printHello();
void printGoodBye();

int main()
{
    printGoodBye();
    printHello();
    return 0;
}

// function definition
void printHello()
{
    printf("Hello ! \n");
    printf("My name is Ishan \n");
}

void printGoodBye()
{
    printf("Good Bye!! \n");
}