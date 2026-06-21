//Calcule a soma dos dígitos de um número inteiro positivo. Por exemplo, se a
//entrada for 123, a função deve retornar 6 (pois 1 + 2 + 3 = 6).

#include <stdio.h>

int somaDigitos(int n){
    if (n < 10){
        return n;
    }
    else{
        return (n%10)+somaDigitos(n/10);
    }
}

int main(){
    printf("%d", somaDigitos(215));
    return 0;
}