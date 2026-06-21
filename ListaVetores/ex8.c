#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

int main(){
    int v1[MAX], v2[MAX], intercalacao[2*MAX], i;
    srand(time(NULL));
    printf("Vetor 1: ");
    for (i = 0; i < MAX; i++){
        printf(" %i ", v1[i] = rand()%10);
    }
    printf("\nVetor 2: ");
    for (i = 0; i < MAX; i++){
        printf(" %i ", v2[i] = rand()%10);
    }

    printf("\nIntercalacao dos dois vetores: \n");
    for(i=0; i < MAX; i++){
        intercalacao[2*i] = v1[i];
        intercalacao[2*i+1] = v2[i];
    }
    for (i=0; i<2*MAX; i++){
        printf(" %i", intercalacao[i]);
    }

    return 0;
}