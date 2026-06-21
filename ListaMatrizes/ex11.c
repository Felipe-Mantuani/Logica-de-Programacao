#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int linha, coluna, i, j;
    printf("Digite o numero de linhas que a matriz vai ter: ");
    scanf("%d", &linha);
    printf("\nDigite o numero de colunas que a matriz vai ter: ");
    scanf("%d", &coluna);
    int matriz[linha][coluna];
    printf("\nDigite os elementos da matriz: \n");
    for (i=0; i < linha; i++){
        for (j=0; j<coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }

    int mNova[coluna][linha];
    printf("\nInterposicao de matriz (linha para coluna e vice-versa): \n");
    for (i=0; i<coluna; i++){
        for(j=0;j<linha; j++){
            printf(" %d", mNova[i][j] = matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}