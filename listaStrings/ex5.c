#include <stdio.h>

void palindromo(char palavra[]){
    int tamanhoPalavra, verificador = 1;
    for(tamanhoPalavra = 0; palavra[tamanhoPalavra] != '\0'; tamanhoPalavra++);
    if(palavra[tamanhoPalavra-1] == '\n'){
        palavra[tamanhoPalavra-1] = '\0';
        tamanhoPalavra--;
    } 
    for(int i = 0; i< tamanhoPalavra/2; i++){
        if (palavra[i]!=palavra[(tamanhoPalavra-1)-i]){
            verificador = 0;
        }
    }
    if (verificador) printf("A palavra e um palindromo!!!");
    else printf("A palavra nao e um palindromo!");
}

int main(){
    char palavra[50];
    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    palindromo(palavra);
    return 0;
}