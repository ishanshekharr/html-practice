#include <stdio.h>

void print(int n);

int main() {
    print(100);
    return 0;
}

void print(int n) { //print numbers 1 to N
    if(n==0) {
        return;
    }
    print(n-1);
    printf("%d \n", n);
}