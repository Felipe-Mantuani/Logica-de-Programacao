//Calcular a soma dos elementos positivos de um dado vetor

#include <stdio.h>

int somaPositivos(int vetor[], int n){
    if (n <= 0){
        return 0;
    }
    if(vetor[n] >0){
        return vetor[n-1]+ somaPositivos(vetor, n-1);
    }
    return somaPositivos(vetor, n-1);
}

int main(){
    int vetor[3] = {0,1,2};
    printf("%d", somaPositivos(vetor, 3));
    return 0;
}