#include <stdio.h>

int main() {
    int l1, c1, l2, c2, i, j, k;
    printf("Digite o número de linhas da matriz 1: ");
    scanf("%d", &l1);
    printf("Digite o número de colunas da matriz 1: ");
    scanf("%d", &c1);
    printf("Digite o número de linhas da matriz 2: ");
    scanf("%d", &l2);
    printf("Digite o número de colunas da matriz 2: ");
    scanf("%d", &c2);

    if (c1 != l2) {
        printf("Não é possível multiplicar as matrizes!\n");
        return 1;
    }

    int matriz1[l1][c1];
    int matriz2[l2][c2];
    int resultado[l1][c2];

    printf("\nDigite os valores da matriz 1:\n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os valores da matriz 2:\n");
    for (i = 0; i < l2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Multiplicação
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < c1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nResultado da multiplicação:\n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}
