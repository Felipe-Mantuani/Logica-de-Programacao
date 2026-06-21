//17. Confira se um vetor está ordenado ascendentemente da primeira posição à n-ésima
//(fornecida pelo usuário). Por exemplo, o vetor {1, 2, 3, 4, -1, -2} está ordenado em
//ordem crescente

#include <stdio.h>

int ordemCrescente(int vetor[], int n){
    if(n <=1){
        return 1;
    }

    if (vetor[n-1] < vetor[n-2]){
        return 0;
    }
    return ordemCrescente(vetor, n-1);
}

int main(){
    int vetor[] = {1,2,3,4};
    int n;
    scanf("%d", &n);
    (ordemCrescente(vetor, n))? printf("Esta em ordem crescente") : printf("Nao esta em ordem crescente");
    return 0;
}