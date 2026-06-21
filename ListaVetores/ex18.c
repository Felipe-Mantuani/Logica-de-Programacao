#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 5

int main(){
    int v1[Max], v2[Max], i, j;
    srand(time(NULL));
    printf("Vetor 1: \n");
    for (i = 0; i< Max; i++){
        printf (" %d", v1[i] = rand()%10);
    }
    printf("\nVetor 2: ");
    for(i=0; i<Max; i++){
        printf(" %d", v2[i] = rand()%10);
    }

    printf("\nElementos em comum: ");
    for (i = 0; i < Max; i++){

        for (j=Max-1; j>i; j--){
            if (v2[j]==v1[i]){
                printf(" %d", v2[j]);
            }
        }
    }

    return 0;
}