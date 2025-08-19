#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("abc.txt", "w"); //fptr = fopen("abc.txt", "a");
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}