#include <stdio.h>

int sum(int n);

int main()
{
    int n = 77777;
    printf("Sum is : %d", sum(n));
    return 0;
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + (sum(n / 10));
}