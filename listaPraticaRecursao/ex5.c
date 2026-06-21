//Faça uma função recursiva que receba um número inteiro positivo N e imprima todos
//os números naturais de 0 até N em ordem crescente.

#include <stdio.h>

void ordemCrescente (int n){
    if (n==0){
        printf("0 ");
    }
    else{
        ordemCrescente(n-1);
        printf(" %d ", n);
    }
}

int main(){
    ordemCrescente(5);
}