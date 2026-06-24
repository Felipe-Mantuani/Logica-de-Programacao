//Escreva uma função que receba um número inteiro e retorne o inverso desse
//número. Por exemplo, se a função receber 123456 deve retornar 654321

#include <stdio.h>

int inverso(int num){
    int inverso = 0;

    while (num != 0) {
        inverso = inverso * 10 + (num % 10);
        num = num / 10;
    }

    return inverso;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", inverso(n));

}