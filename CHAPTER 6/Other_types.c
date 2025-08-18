#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i//(j is a character pointer)

    float k = 5.232;
    float *k1 = &k; // k is a float pointer//

    printf("The address at i is %u\n", &i);
    printf("The address at i is %u\n", &k);

    printf("The value at address i is %d\n", *j);
    printf("The value at address i is %f\n", *k1);

    return 0;
}