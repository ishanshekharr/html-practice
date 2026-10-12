#include <stdio.h>

int count(int arr[], int n, int x);
int largest(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, x;

    // printf("Enter the number x : ");
    // scanf("%d", &x);

    // printf("No. of times %d appeared is : %d", x, count(arr, 10, 3));

    printf("The largest no. in array is %d", largest(arr, 10));
    return 0;
}

// count of a no. (x) that has appeared in array

int count(int arr[], int n, int x)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            c++;
        }
    }
    return c;
}

// largest number of array
int largest(int arr[], int n)
{
    int large = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}