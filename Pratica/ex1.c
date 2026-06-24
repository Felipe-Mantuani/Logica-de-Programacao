//Escreva uma função que receba um número inteiro positivo x e retorne a soma de
//todos os inteiros positivos entre 1 e x

#include <stdio.h>

int somatorioRec(int x){
    if (x == 1){
        return 1;
    }
    else return x+somatorioRec(x-1);
}

int somatorioIt(int x){
    int soma = 0;
    for(int i = x; i>=0; i--){
        soma += i;
    }
    return soma;
}

int main(){
    int x;
    scanf("%d", &x);
    printf("(recursivo) A soma de 1 ate %d e igual a %d", x, somatorioRec(x));
    printf("\n(iterativo) A soma de 1 ate %d e igual a %d", x, somatorioIt(x));

    return 0;
}