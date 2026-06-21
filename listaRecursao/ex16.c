// Mostre na tela uma string com '' (espaco) concatenado entre cada dois caracteres. Por exempli, se a string dada por entrada for "espaco", a funcao deve retornar "e s p a c o.
#include <stdio.h>

void stringEspaco(char palavra[], int indice){
    if(palavra[indice] == '\0' || palavra[indice] == '\n'){
        return;
    }
    printf("%c", palavra[indice]);
    if (palavra[indice+1] != '\n' || palavra[indice+1] != '\0'){
        printf(" ");
    }
    stringEspaco(palavra, indice+1);
}

int main(){
    char palavra[50];
    fgets(palavra, 50, stdin);
    stringEspaco(palavra, 0);
}