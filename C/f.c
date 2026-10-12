#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("%c \n", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c \n", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c \n", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c \n", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c \n", ch);

    // to check whether a file exoists or not
    //  if (fptr == NULL)
    //  {
    //      printf("This file doesn't exist");
    //  }
    //  else
    //  {
    //      fclose(fptr);
    //  }

    fclose(fptr);
    return 0;
}