#include <stdio.h>

int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if(age>=18 && age<60)
        printf("You're an adult!!");
    else if(age>=60)
        printf("You're a senior citizen!!");
    else 
        printf("You're a child!!");
    
    return 0;
}
