#include <stdio.h>

int main(){
    char palavra1[50], palavra2[50];
    int tamanhoPalavra1, tamanhoPalavra2, verificador = 1;
    printf("Digite a primeira palavra: ");
    fgets(palavra1, 50, stdin);
    printf("Digite a segunda palavra: ");
    fgets(palavra2, 50, stdin);
    //Verificando o tamanho das variaveis
    for(tamanhoPalavra1 = 0; palavra1[tamanhoPalavra1]!='\0'; tamanhoPalavra1++);
    tamanhoPalavra1--;
    for(tamanhoPalavra2 = 0; palavra2[tamanhoPalavra2]!='\0'; tamanhoPalavra2++);
    tamanhoPalavra2--;
    //comparações
    if (tamanhoPalavra1!=tamanhoPalavra2){
        printf("As palavras nao sao iguais!");
    }
    else{
        for (int i = tamanhoPalavra1; i>=0; i--){
            if (palavra1[i] != palavra2[i]){
                verificador = 0;
            }
        }
        if (verificador) printf("As palavras sao iguais!!!");
        else printf("As palavras nao sao iguais!");
    }

    return 0;
}