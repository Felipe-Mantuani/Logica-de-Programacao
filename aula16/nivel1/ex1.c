#include <stdio.h>

int divisao(int a, int b){
    if (a < b){
        return 0;
    }
    else{
        return 1 + divisao(a-b, b);
    }
}

int main(){
    printf("%d", divisao(4, 2));
    return 0;
}