#include <stdio.h>

int countOdd(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = 20;
    printf("Number of odd numbers : %d \n", countOdd(arr, 20));
    // reversing an array
    for (int i = 0; i < n / 2; i++)
    {
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}

int countOdd(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            c++;
        }
    }
    return c;
}