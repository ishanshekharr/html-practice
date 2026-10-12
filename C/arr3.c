#include <stdio.h>

int main()
{
    int table[2][10];
    int n = 2;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = n * (j + 1);
        }
        n++;
    }

    // print
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d \t", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}