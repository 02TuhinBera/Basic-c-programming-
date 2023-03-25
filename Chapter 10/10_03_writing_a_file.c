#include <stdio.h>
int main()
{
    FILE *fptr;
    int number = 99;
    fptr = fopen("generate.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "I am using fprinf.", number);
    fclose(fptr);
    return 0;
}