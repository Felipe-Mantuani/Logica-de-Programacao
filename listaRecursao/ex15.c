#include <stdio.h>

int prod(int a, int b){
    if (a==0 || b==0) return 0;
    else{
        return b+prod(a-1, b);
    }
}

int main(){
    int a, b;
    printf("%d", prod(2,5));
}