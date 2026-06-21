#include <stdio.h>

int main()
{
    int n, contador, soma, media;
    soma = 0;
    contador = 0;
    printf("Digite um número inteiro (Ou '0' para parar): ");
    scanf("%i", &n);
    while (n > 0){
        soma += n;
        contador += 1;
        printf("Digite um número inteiro (Ou '0' para parar): ");
        scanf("%i", &n);
    }
    printf("A soma dos números digitados: %i\n", soma);
    printf("Contador de quantos números o usuário digitou: %i", contador);
    return 0;
}