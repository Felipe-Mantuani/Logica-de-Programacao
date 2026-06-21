#include <stdio.h>

void mostrarPar(int inicio, int fim){
    if (inicio == fim){
        if (inicio % 2 == 0){
            printf(" %d ", inicio);
        }
    }
    else{
        if (inicio % 2 == 0){
            printf(" %d ", inicio);
        }
        mostrarPar(inicio+1, fim);
    }
}

int main(){
    int n;
    printf("Digite um valor n: ");
    scanf("%d", &n);
    mostrarPar(1, n);

    return 0;
}