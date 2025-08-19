#include <stdio.h>

typedef struct emp
{
    int salary;
    float score;
} employee;

int main()
{
    employee e1;
    employee *ptr1 = &e1;
    ptr1->salary = 56;
    ptr1->score = 45.3;
    printf("the value of salary is %d and the value of score is %.2f\n", ptr1->salary, ptr1->score);
    return 0;
}