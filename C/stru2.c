#include <stdio.h>

typedef struct ComputerScienceEngineering
{
    char name[100];
    int roll;
    float cgpa;
} cse;

int main()
{
    cse s1 = {"Ishan", 21, 9.4};
    printf("Name is : %s", s1.name);
    return 0;
}