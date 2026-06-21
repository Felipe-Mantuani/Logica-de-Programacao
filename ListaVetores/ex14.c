// Elemento Mais Frequente: Implemente um programa que identifica e imprime o elemento
// mais frequente em um vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 5

int main (){
    int v[Max], i, j, frequencia;
    srand(time(NULL));
    for (i = 0; i < Max; i++){
        printf(" %d", v[i]=rand()%10);
    }
    int maxFrequencia = 0, elementoMaisFrequente = v[0];
    for (i = 0; i < Max; i++) {
        frequencia = 1;
        for (j = 0; j < Max; j++) {
            if (v[i] == v[j] && i != j) {
                frequencia++;
            }
        }
        if (frequencia > maxFrequencia) {
            maxFrequencia = frequencia;
            elementoMaisFrequente = v[i];
        }
    }
    printf("\nElemento mais frequente: %d (aparece %d vezes)\n", elementoMaisFrequente, maxFrequencia);
}