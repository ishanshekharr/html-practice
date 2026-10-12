#include <stdio.h>

int main()
{
    int aadhar[5];
    int *ptr = aadhar;
    // printf("%d", ptr);

    // input
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d index : ", i);
        scanf("%d", ptr + i);
    }

    // output
    for (int i = 0; i < 5; i++)
    {
        printf("Value at index %d at position %d is : %d \n", i, ptr + i, *(ptr + i));
    }
    return 0;
}