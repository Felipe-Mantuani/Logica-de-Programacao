#include <stdio.h>
#define Max 5

int main (){
    int i, j, vetor[Max];
    printf("Digite um vetor que seja crescente ou decrescente: \n");
    for (i=0; i < Max; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("\nVetor: ");
    for (i=0; i<Max; i++){
        printf(" %d", vetor[i]);
    }

    int crescente = 1, decrescente = 1;
    for (i = 0; i < Max - 1; i++) {
        if (vetor[i] < vetor[i + 1]) {
            decrescente = 0;
        } else if (vetor[i] > vetor[i + 1]) {
            crescente = 0;
        }
    }
    if (crescente)
        printf("\nO vetor esta ordenado em ordem crescente!\n");
    else if (decrescente)
        printf("\nO vetor esta ordenado em ordem decrescente!\n");
    else
        printf("\nO vetor nao esta ordenado!\n");
}