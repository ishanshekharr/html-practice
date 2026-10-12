#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt", "a");

    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));
    // printf("%c", fgetc(fptr));

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    return 0;
}