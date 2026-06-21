#include <stdio.h>

void converterParaMinusculo(char string[]){
    int tamanhoString;
    for (tamanhoString = 0; string[tamanhoString] != '\0'; tamanhoString++);
    if (string[tamanhoString] == '\n'){
        string[tamanhoString] = '\0';
        tamanhoString--;
    }
    for(int i = 0; i < tamanhoString; i++){
        if (string[i] >= 'A' && string[i]<='Z'){
            string[i] = string[i] + 32;
            printf("%c", string[i]);
        }
        else{
            printf("%c", string[i]);
        }
    }
}

int main(){
    char string[50];
    printf("Digite uma palavra: ");
    fgets(string, 50, stdin);
    converterParaMinusculo(string);
    return 0;
}