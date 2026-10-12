#include <stdio.h>

int main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    age>=18 ? printf("You're an adult !") : printf("You're a child !");
}