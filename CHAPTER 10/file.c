#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fclose(ptr);
    return 0;
}
//THIS WILL READ AN INTEGER FROM FILE IN NUM VARIABLE//