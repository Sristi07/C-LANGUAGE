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
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;
    //printf("%d", (*ptr).code);
    printf("%d", ptr->code); //exactly same as (*ptr).com//
    return 0;
}