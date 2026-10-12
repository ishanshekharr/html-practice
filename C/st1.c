#include <stdio.h>

int main()
{

    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello Girl"; // pointers can be reassigned
    puts(canChange);

    char cantChange[] = "hello world";
    puts(cantChange);
    // cantChange = "hello";  //strings cant be reassigned
    puts(cantChange);
    return 0;
}