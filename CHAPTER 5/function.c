#include <stdio.h>

// Function prototype
int sum(int, int);

// Function defination
int sum(int x, int y)
{
    // printf("The sum is %d\n", x + y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;
    // int c = a+b;
    // printf("The sum is %d\n",c);
    int c = sum(a, b); // Function call
    printf("%d\n", c);

    int a1 = 12;
    int b1 = 23;
    // int c1 = a1+b1;
    // printf("The sum is %d\n",c1);
    sum(a1, b1); // Function call

    return 0;
}