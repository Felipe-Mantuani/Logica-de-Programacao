#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 2
#define C 2

int main(){
    int m1[L][C], m2[L][C], i, j;
    srand(time(NULL));
    printf("Matriz 1: \n");
    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++){
            printf(" %d", m1[i][j] = rand()%10);
        }printf("\n");
    }
    printf("\nMatriz 2: \n");
    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++){
            printf(" %d", m2[i][j] = rand()%10);
        }printf("\n");
    }

    printf("\nSoma de duas matrizes:\n");
    for (i=0; i < L; i++){
        for (j=0; j<C; j++){
            printf(" %d", m1[i][j]+m2[i][j]);
        } printf("\n");
    }
    
    return 0;
}