//Vetor de Acumulação: Faça um programa que cria um novo vetor onde cada posição i é a
//soma de todos os elementos até i no vetor original.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 5

int main(){
    int v[Max], vSoma[Max], i, j, soma=0;
    srand(time(NULL));
    for (i = 0; i < Max; i++){
        printf(" %d", v[i]=rand()%10);
    }
    
    for (i=0;i<Max;i++){
        soma=0;
        for (j=0; j<=i; j++){
            soma += v[j];
        }
        vSoma[i] = soma;
    }
    printf("\nNovo vetor: \n");
    for (i=0; i< Max; i++){
        printf(" %d", vSoma[i]);
    }

}