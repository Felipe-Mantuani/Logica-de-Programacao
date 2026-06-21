#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

int main(){
    int matriz[L][C], i, j, verificador=1;
    printf("Digite os elementos da matriz:\n");
    for (i=0; i<L;i++){
        for(j=0; j<C; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for(i=0;i<L;i++){
        for(j=0; j<C; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<L;i++){
        for(j=0; j<C; j++){
            if (( i != j ) && (matriz[i][j] != 0)){
                verificador = 0;
            }
        }
    }
    if (verificador) printf("\nE uma matriz diagonal!");
    else printf("\nNao e uma matriz digagonal");
}