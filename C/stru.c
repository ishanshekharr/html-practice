#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{

    struct student s1;
    s1.roll = 101;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Isha");

    printf("Name : %s \n", s1.name);
    printf("Roll no. %d\n", s1.roll);
    printf("CGPA : %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 102;
    s2.cgpa = 9.1;
    strcpy(s2.name, "Ishi");

    printf("Name : %s\n", s2.name);
    printf("Roll no. %d\n", s2.roll);
    printf("CGPA : %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 103;
    s3.cgpa = 9.5;
    strcpy(s3.name, "Ishu");

    printf("Name : %s\n", s3.name);
    printf("Roll no. %d\n", s3.roll);
    printf("CGPA : %f\n", s3.cgpa);
    return 0;
}

// struct student ece[100];
// struct student cse[100];
// ece[0].roll=100;
// cse[0].roll=100;