// Faça uma função recursiva que receba um número inteiro positivo N e imprima todos
//os números naturais de 0 até N em ordem decrescente

#include <stdio.h>

void ordemDecrescente(int n){
    if (n==0) printf(" 0");
    else{
        printf(" %d ", n);
        ordemDecrescente(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    ordemDecrescente(n);
}