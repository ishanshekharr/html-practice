#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test1.txt", "r");

    int n;

    for (int i = 0; i < 5; i++)
    {
        fscanf(fptr, "%d", &n);
        printf("%d \n", n);
    }

    fclose(fptr);
    return 0;
}