#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i// (j is an integer pointer)
    int k = 65;
    printf("The address of %p\n", &i); //%u for unsigned integer value output//
    printf("The address of %p\n", j);
    printf("The address of %p\n", &k);

    printf("The value at address j is %d\n", *j);
    printf("The value at address j is %d\n", *(&j));
    return 0;
}