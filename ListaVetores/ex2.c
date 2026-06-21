#include <stdio.h>
#define MAX 5

int main(){
    int v[MAX], i;

    for (i = 0; i < MAX; i++){
        printf("Digite um numero inteiro: ");
        scanf("%i", &v[i]);
    }
    int maior = v[0];
    int menor = v[0];
    for (i = 0; i < MAX; i++){
        if (v[i] > maior){
            maior = v[i];
        }
        else if (v[i]<menor){
            menor = v[i];
        }
    }

    printf("O maior numero do vetor: %d ", maior);
    printf("\nO menor numero do vetor: %d", menor);
    return 0;
}