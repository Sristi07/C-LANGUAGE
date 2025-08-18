#include <stdio.h>

float c2f(float c);

float c2f(float c)
{
    return (9.0 / 5.0) * c + 32;
}

int main()
{
    float c = 45;
    printf("Celsius to fahrenheit for %f is %2f", c, c2f(c));
    return 0;
}