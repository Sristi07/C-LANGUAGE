#include <stdio.h>

int main()
{
    int n = 3;
    for (int i = 0; i < 3; i++)
    {

        // This loop runs from 0 to 2
        // if i=0--->prints 1 star
        // if i=1--->prints 3 stars
        // if i=2--->prints 5 stars
        // no_of_stars=(2*i+1)

        // This for loop prints(2*i+1) stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }

        // This printf prints a new line
        printf("\n");
    }
    return 0;
}