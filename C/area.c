#include <stdio.h>
/*
int main() {
    int side;
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);
    printf("The area of the square is: %d\n", side * side);
    return 0;
}
    */
int main() {
    float radius;
    printf("Enter the radius : ");
    scanf("%f", &radius);
    printf("Area of circle with radius %f is : %f ", radius,3.14 * radius * radius);
}