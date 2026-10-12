#include <stdio.h>

float power(int a, int b);

int main() {
    int a=5, b=6;
    float res=power(a,b);
    printf("answer is : %f ", res); 
    return 0;
}

float power(int a, int b) {
    if(b==0) {
        return 1;
    }
    return a * power(a,b-1);
}