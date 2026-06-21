//Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.
#include <stdio.h>

int fat(int n){
    if (n==1) return 1;
    else return n*fat(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fat(n));
    printf("\n");
    return 0;
}