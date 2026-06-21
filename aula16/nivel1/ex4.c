//Calcular a potência de um número (base a e expoente b fornecidos pelo
//usuário) utilizando apenas multiplicações sucessivas

#include <stdio.h>

int pot(int base, int expoente){
    if (expoente == 1) return base;
    else return base*pot(base, expoente-1);
}

int main(){
    printf("%d", pot(3,3));
    return 0;
}