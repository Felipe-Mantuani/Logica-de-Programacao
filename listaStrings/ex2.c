#include <stdio.h>

int main(){
    char palavra[50];
    int tamanhoPalavra;
    printf("Digiten alguma palavra: ");
    fgets(palavra, 50, stdin);
    for(tamanhoPalavra = 0; palavra[tamanhoPalavra]!= '\0'; tamanhoPalavra++);
    tamanhoPalavra--;
    printf("A palavra tem %d caracteres!", tamanhoPalavra);

    return 0;
}