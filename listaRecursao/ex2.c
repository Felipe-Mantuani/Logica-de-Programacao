//mostre na tela numeros de 10 a 1
#include <stdio.h>

void numerosAteUm(int n){
    if (n == 1) printf(" %d ", n);
    else{
        printf(" %d ", n);
        numerosAteUm(n-1);
    }
}

int main(){
    int n = 10;
    numerosAteUm(n);
    return 0;
}