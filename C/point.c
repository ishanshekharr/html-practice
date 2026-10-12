#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;

    //print address
    printf("%u \n", &age);
    printf("%u \n", ptr);
    printf("%u \n", &ptr);

    //print value
    printf("%d \n", age);
    printf("%d \n", *ptr );
    printf("%d \n", *(&age));
    return 0;
}