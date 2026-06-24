/* Escreva duas funções para criptografia e descriptografia de uma string recebida como parâmetro. A função de criptografia deve avançar cada caractere da string em duas posições na tabela ASCII. Por exemplo, ao receber a string “Casa 10!”, a função deve produzir uma string criptografada. A função de descriptografia deve realizar a operação inversa, recebendo a string criptografada e recuperando a string original. */

#include <stdio.h>

void descriptografia(char string[]){
    for(int i = 0; string[i] != '\0'; i++){
        string [i] -= 2;
    }
}

void criptografia(char string[]){
    for(int i = 0; string[i]!= '\0'; i++){
        string[i] += 2;
    }
}

int main(){
    char string[100];
    printf("Digite a sua senha: ");
    scanf("%99[^\n]", string);
    criptografia(string);
    printf("\nSenha criptografada: %s", string);
    descriptografia(string);
    printf("\nSenha descriptografada: %s", string);

    return 0;
}