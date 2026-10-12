#include <stdio.h>

struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex num1 = {5, 8};
    struct complex *ptr = &num1;

    printf("Real part : %d \n", ptr->real);
    printf("Img part : %d \n", ptr->img);
    return 0;
}