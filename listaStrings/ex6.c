#include <stdio.h>

void subCaracteres(char palavra[], char a, char b){
    for (int i = 0; palavra[i] != '\0'; i++ ){
        if (palavra[i] == a) palavra[i] = b;
    }
    printf("\nNova palavra: %s", palavra);
}

int main(){
    char a, b, palavra[50];
    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    printf("Digite a caractere que vai ser substituida: ");
    scanf(" %c", &a);
    printf("\nDigite a nova caractere: ");
    scanf(" %c", &b);
    subCaracteres(palavra, a, b);

    return 0;
}