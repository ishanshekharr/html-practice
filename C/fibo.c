#include <stdio.h>

int fib(int n);

int main() {
    printf("Enter a number : ");
    int n;
    scanf("%d", &n);
    printf("Fibonacci of %d is : %d", n, fib(n));
    return 0;
}

int fib(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    int fibN = fib(n-1) + fib(n-2);
    
    return fibN;
}