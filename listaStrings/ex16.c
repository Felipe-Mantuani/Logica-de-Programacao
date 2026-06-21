//16. Remoção de Duplicatas: Escreva um programa que remova caracteres duplicados
//consecutivos em uma string.

#include <stdio.h>

int main(){
    char string[100];
    int tamanho;
    printf("Digite: ");
    fgets(string, 100, stdin);
    for(tamanho = 0; string[tamanho]!= '\0'; tamanho++);
    if(string[tamanho-1] == '\n'){
        string[tamanho-1] = '\0';
        tamanho--;
    }

    int j = 0;
    for (int i = 0; i < tamanho; i++){
        if (string[i] != string[i+1]){
            string[j] = string[i];
            j++;
        }
    }

    string[j] = '\0';
    printf("%s", string);
}