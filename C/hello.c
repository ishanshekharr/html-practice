// #include <stdio.h>
// // Outputs in C
// int main()
// {
//     // Data Types of C
//     // printf("Hello World!\n");
//     // int age = 18;
//     // printf("Age is %d \n", age);
//     // float pi = 3.14;
//     // printf("Value of Pi is %f \n", pi);
//     // char hashtag = '#';
//     // printf("Hashtag looks like this  %c \n", hashtag);

//     return 0;
// }

#include <stdio.h>

int main()
{
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    float f = celsius * (1.8) + 32;
    printf("Temperature in Fahrenheit = %f", f);
    return 0;
}