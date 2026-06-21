#include <stdio.h>

void mostrarImpar(int inicio, int fim){
    if (inicio == fim){
        if (fim % 2 != 0){
            printf(" %d ", fim);
        }
    }
    else {
        if (inicio % 2 != 0){
            printf(" %d ", inicio);
        }
        mostrarImpar(inicio+1, fim);
    }
}

int main(){
    int n;
    printf("Digite um valor de n: ");
    scanf("%d", &n);
    printf("\nValores de 1 ate n impares:\n");
    mostrarImpar(1, n);

    return 0;
}