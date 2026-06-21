#include <stdio.h>

// Função que calcula o Fibonacci de forma interativa para facilitar a exibição em ordem
void mostrarFibonacci(int n) {
    int t1 = 1, t2 = 1, proximoTermo;

    printf("Os %d primeiros termos da sequência de Fibonacci são:\n", n);

    for (int i = 1; i <= n; ++i) {
        // Imprime o termo atual
        printf(" %d", t1);

        // Calcula o próximo termo da sequência
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    }
    printf("\n");
}

int main() {
    int n;

    // Solicita a entrada do usuário
    printf("Digite a quantidade de termos (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Por favor, insira um número inteiro positivo maior que zero.\n");
        return 1;
    }

    // Chama a função para exibir os termos
    mostrarFibonacci(n);

    return 0;
}
