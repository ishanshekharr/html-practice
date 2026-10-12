#include <stdio.h>

void printTable(int arr[][10], int m, int n, int num);
int main()
{
    int tables[2][10];

    printTable(tables, 0, 10, 2);
    printTable(tables, 1, 10, 3);
    return 0;
}

void printTable(int arr[][10], int m, int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        arr[m][i] = num * (i + 1);
        printf("%d \t", arr[m][i]);
    }
    printf("\n");
}