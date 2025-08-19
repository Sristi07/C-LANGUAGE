#include <stdio.h>

int main(){
    char st[30];
    gets(st); //the entered string is stored in st
    printf("%s",st);
    return 0;
}

//Use fgets over gets, as gets causes a lot of buffering problem//