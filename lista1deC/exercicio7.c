#include <stdio.h>
#include <math.h>

int main()
{
    int n, raiz;
    printf("Digite um número inteiro: ");
    scanf("%i", &n);
    if (n>= 0){
        raiz = sqrt(n);
        printf("O número inteiro que mais se aproxima da raíz de %i é %i!", n, raiz);
    } else {
        printf("Não é possível calcular a raíz par de um número negativo!");
    }

    return 0;
}