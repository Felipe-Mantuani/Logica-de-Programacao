#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 5

int main(){
    int v1[Max], v2[Max], contagem = 0, encontrado, i, j;
    srand(time(NULL));

    printf("Vetor 1: ");
    for (i=0; i<Max; i++){
        printf(" %d", v1[i]= rand()%10);
    }

    printf("\nVetor 2: ");
    for (i=0; i<Max; i++){
        printf(" %d", v2[i] = rand()%10);
    }
    int *vDif = (int*)malloc(Max * sizeof(int));

    for (i=0; i<Max; i++){
        encontrado = 0;
        for (j=0; j<Max; j++){
            if (v1[i]==v2[j]){
               encontrado = 1;
               break;
            }
        }
        if(!encontrado){
            vDif[contagem] = v1[i];
            contagem ++;
        }
    }

    for (i = 0; i < Max; i++) {
        encontrado = 0;
        for (j = 0; j < Max; j++) {
            if (v2[i] == v1[j]) { encontrado = 1; break; }
        }
        if (!encontrado) vDif[contagem++] = v2[i];
    }

    printf("\nVetor com elementos diferentes: ");
    for (i=0; i<contagem; i++){
        printf(" %d", vDif[i]);
    }

    free(vDif);
    return 0;
}