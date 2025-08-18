#include <stdio.h>

int main(){
    int i=5;
    printf("The value of i is %d\n",i);

    i=i+5;//10
    printf("The value of i is %d\n",i);
    //i++;11//
    printf("The value of i is %d\n",i++);//10
    printf("The value of i is %d\n",i);//11

    i+=2; //same as i=i+2
    printf("The value of i is %d\n",i); //11
    return 0;
}
//i++ prints i first and then increments i (post increment operator)
//++i increments i first then prints i (post increment operator)