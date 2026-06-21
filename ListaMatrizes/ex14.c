#include <stdio.h>
#include <stdlib.h>

int main(){
    int l, c, j, i, contador = 0;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &l);
    printf("\nDigite o numero de colunas da matriz: ");
    scanf("%d", &c);

    int matriz[l][c];
    printf("\nDigite os elementos da matriz:\n");
    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            if (matriz[i][j] < 0) contador +=1;
        }
    }

    if (contador) printf("\nExistem %d elementos negativos!", contador);
    else printf("Nao existem elementos negativos na matriz");
    return 0;
}