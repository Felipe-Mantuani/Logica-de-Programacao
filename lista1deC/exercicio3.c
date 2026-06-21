#include <stdio.h>
int main (){
    int n, soma = 0;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 0; i <=n; i+=2) {
        soma += i;
    }

    printf("Soma dos termos pares: %d\n", soma);
    return 0;
}