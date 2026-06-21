#include <stdio.h>

void numerosAteN(int atual, int n){
    if (atual == n) printf(" %d ", atual);
    else {
        printf(" %d ", atual);
        numerosAteN(atual+1, n);
    }
}

int main(){
    int n, atual = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    numerosAteN(atual, n);

    return 0;
}