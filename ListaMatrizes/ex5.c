#include <stdio.h>
#include <stdlib.h>
int main(){
    int l, c, i, j, contador = 0;
    printf("Digite o numeros de linhas da matriz: ");
    scanf("%d", &l);
    printf("\nDigite o numero de colunas da matriz: ");
    scanf("%d", &c);
    int matriz[l][c];

    printf("\nDigite os elementos de sua matriz:\n");
    for (i=0; i<l;i++){
        for (j=0; j<c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for(i=0; i<l;i++){
        for(j=0; j<c; j++){
            printf(" %d", matriz[i][j]);
        } 
        printf("\n");
    }

    //contagem de quantos 0 tem na matriz:
    for (i=0; i < l; i++){
        for (j=0; j < c; j++){
            if (matriz[i][j] == 0){
                contador += 1;
            }
        }
    }

    //comparo o contador com 50% do tamanho da matriz
    int tamanhoMatriz = c*l;
    if (contador > tamanhoMatriz*0.5){
        printf("A matriz e esparsa, %.2f%% dos elementos e 0!", ((float)contador*100/tamanhoMatriz));
    }
    else{
        printf("A matriz nao e esparsa, %.2f%% dos elementos e igual a 0!", ((float)contador*100/tamanhoMatriz));
    }


    return 0;
}