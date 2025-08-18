#include <stdio.h>

int main(){
    //problem: write a program to print first 'n' natural number using do-while loop//
    int n, i=1;
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}