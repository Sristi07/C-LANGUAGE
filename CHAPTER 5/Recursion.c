#include <stdio.h>

int factorial(int);

    //factorial(5) = 1 X 2 X 3 X 4 X 5
    //factorial(4) = 1 X 2 X 3 X 4 
    //factorial(n) = 1 X 2 X 3 X .... X n-1 X n
    //factorial(n-1) = 1 X 2 X 3 X .... X n-1

int factorial(int n){
    if(n==1||n==0){ //base condition//
        return 1;
    }
    //factorial(n) = factorial(n-1) X n
    return factorial(n-1)*n;
}

int main(){
    int a =3;
    printf("The factorial of %d is %d",a, factorial(a));
    return 0;
}