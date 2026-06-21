#include <stdio.h>

int contagemPalavras(char palavras[]){
    int contagemPalavra = 0, ehPalavra = 0;
    for (int i = 0; palavras[i]!= '\0'; i++){
            if (palavras[i] != ' ' && palavras[i] !='\t' && palavras[i]!='\n'){
                if(!ehPalavra){
                    contagemPalavra++;
                    ehPalavra=1;
                }
            }
            else{
                ehPalavra=0;
            }
    }


    return contagemPalavra;
}

int main(){
    char palavras[100];

    printf("Digite: ");
    fgets(palavras, 100, stdin);
    printf("\nforam %d palavras digitadas!", contagemPalavras(palavras));
    return 0;
}