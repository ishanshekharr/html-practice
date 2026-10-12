#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b, sum;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    sum = sum(a, b);
    printf("Sum of %d and %d is : %d\n", a, b, sum);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}