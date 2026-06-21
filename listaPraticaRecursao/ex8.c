#include <stdio.h>

int fat (int n){
    if (n==0) return 1;
    else return n*fat(n-1);
}

int combinacao(int n, int r){
    int numerador, denominador;
    numerador = fat(n);
    denominador = fat(r) * fat(n-r);
    return numerador / denominador;
}

int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("numero de combinacoes: %d", combinacao(n, r));

    return 0;
}