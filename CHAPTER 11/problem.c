#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 3.87;
    ptr[1] = 16.75;
    ptr[2] = 7.99;
    ptr[3] = 90.0;
    ptr[4] = 28.56;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}
