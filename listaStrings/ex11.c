#include <stdio.h>

void remocaoEspacos(char string[]){
    int i, count = 0;
    
    // Percorre toda a string
    for (i = 0; string[i] != '\0'; i++){
        // Se o caractere não for um espaço, ele é salvo na posição 'count'
        if (string[i] != ' '){
            string[count] = string[i];
            count++;
        }
    }
    // Adiciona o terminador de string nulo ao final do novo texto
    string[count] = '\0';
    
    printf("\nString sem espacos: %s", string);
}

int main(){
    char string[50];
    printf("Digite um texto: ");
    fgets(string, 50, stdin);
    
    // Remove o caractere '\n' inserido pelo fgets
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == '\n'){
            string[i] = '\0';
            break;
        }
    }
    
    remocaoEspacos(string);
    return 0;
}
