#include <stdio.h>

int divisao (int a, int b){
    if (a<b){
        return 0;
    }
    else{
        return 1+divisao(a-b, b);
    }
}

int main(){
    int a, b;
    printf("Digite o numerador: ");
    scanf("%d", &a);
    printf("Digite o denominador: ");
    scanf("%d", &b);
    printf("Divisao: %d", divisao(a, b));
}