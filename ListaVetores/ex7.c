#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

int main(){
    int v1[MAX], v2[MAX], concatenacao[2*MAX], i;
    srand(time(NULL));
    printf("Vetor 1: ");
    for (i = 0; i < MAX; i++){
        printf(" %i ", v1[i] = rand()%10);
    }
    printf("\nVetor 2: ");
    for (i = 0; i < MAX; i++){
        printf(" %i ", v2[i] = rand()%10);
    }

    printf("\nConcatenacao dos dois vetores: \n");
    for(i=0; i < MAX; i++){
        concatenacao[i] = v1[i];
    }
    for(i=0; i < MAX; i++){
        concatenacao[i+MAX] = v2[i];
    }
    for(i=0; i < 2*MAX; i++){
        printf(" %i ", concatenacao[i]);
    }

    return 0;
}