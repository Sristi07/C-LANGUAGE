#include <stdio.h>
#include <string.h>

int main(){
    char c='z';
    int contains=0;
    char str[]="zebra";
    for(int i = 0; i < strlen(str); i++)
    {
       if(str[i]==c){
        contains=1;
        break;
        }
    }
    if(contains){
        printf("Yes it contains!\n");
    }
    else{
        printf("Does not contain!\n");
    }
    printf("%d",contains);
    
    return 0;
}