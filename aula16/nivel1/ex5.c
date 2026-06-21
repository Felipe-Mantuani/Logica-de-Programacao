//Conte e retorne a quantidade de dígitos de um número inteiro. Por exemplo,
//para a entrada 4567, a função deve retornar 4

#include <stdio.h>

int digitos(int n){
    if (n<10){
        return 1;
    }
    else{
        return 1+digitos(n/10);
    }
}

int main(){
    printf("%d", digitos(10000));
    return 0;
}