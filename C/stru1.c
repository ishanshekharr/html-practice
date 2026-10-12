#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{

    // initialising the structures
    struct student s1 = {"ishan", 101, 9.2};
    struct student s2 = {"ishi", 102, 9.3};
    struct student s3 = {0}; // assigning 0/null value

    struct student *ptr = &s1;
    printf("Name is : %s \n", (*ptr).name);
    printf("Name is : %s", ptr->name);
    return 0;
}