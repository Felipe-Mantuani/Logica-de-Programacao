#include <stdio.h>

void subString(char palavra[], int posicao, int comprimento){
    int tamanhoPalavra;
    for (tamanhoPalavra = 0; palavra[tamanhoPalavra] != '\0'; tamanhoPalavra++);
    if (palavra[tamanhoPalavra] == '\n'){
        palavra[tamanhoPalavra] = '\0';
        tamanhoPalavra--;
    }
    if (posicao <= tamanhoPalavra && posicao >= 0){
        if (comprimento < tamanhoPalavra-posicao){
            char subString[comprimento];
            subString[comprimento] = '\0';
            for(int i = 0; i<comprimento; i++){
                subString[i] = palavra[posicao+i];
            }
            printf("A subString e: %s", subString);
        }
        else printf("O comprimento e maior do que a posicao ate o final da palavra! ");
    }
    else printf("A posicao e invalida! ");
}

int main(){
    char palavra[50];
    int posicao, comprimento;
    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    printf("Digite a posicao: ");
    scanf("%d", &posicao);
    printf("Digite o comprimento: ");
    scanf("%d", &comprimento);
    subString(palavra, posicao, comprimento);
}