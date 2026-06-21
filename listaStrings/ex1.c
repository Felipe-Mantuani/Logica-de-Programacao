#include <stdio.h>

int main(){
    int tamanhoPalavra=0, contador = 0;
    char palavra[100], palavraInversa[100];
    fgets(palavra, 100, stdin);
    printf("Palavra original: %s", palavra);
    for(tamanhoPalavra = 0; palavra[tamanhoPalavra] != '\0'; tamanhoPalavra++);
    tamanhoPalavra--;
    printf("tamanho: %d", tamanhoPalavra);
    for (int i = tamanhoPalavra; i>= 0; i--){
        palavraInversa[contador]= palavra[i];
        contador++;
    }
    palavraInversa[contador+1] = '\0';
    printf("%s", palavraInversa);
    return 0;
}
