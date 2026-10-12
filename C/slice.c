#include <stdio.h>

void slice(char ch[], int m, int n);
int main()
{
    char ch[] = "IshanShekhar";
    slice(ch, 3, 7);
    return 0;
}

void slice(char ch[], int m, int n)
{
    char newStr[100];
    for (int i = 0, j = m; j <= n; i++, j++)
    {
        newStr[i] = ch[j];
    }
    puts(newStr);
}