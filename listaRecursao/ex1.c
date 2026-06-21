//Mostre na tela numeros de 1 a 10
#include <stdio.h>

void numeros(int n){
    if (n==10){
        printf(" %d", n);
    }
    else {
        printf(" %d ", n);
        numeros(n+1);
    }
}

int main(){
    int n = 1;
    numeros(n);

    return 0;
}