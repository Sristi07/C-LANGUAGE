#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // this declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee facebook[100]; // an array of structures
    facebook[0].code = 100;
    facebook[1].code = 101;

    struct employee abc={100,71.22,"abc"};
    printf("%d %f %s",abc.code,abc.salary,abc.name);

    return 0;
}