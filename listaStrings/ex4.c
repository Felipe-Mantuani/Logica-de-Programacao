#include <stdio.h>

void concatenaPalavras(char string1[], char string2[]) {
    int tamanhoString1, tamanhoString2, contador = 0;
    for(tamanhoString1=0; string1[tamanhoString1]!= '\0'; tamanhoString1++);
    tamanhoString1--;
    for(tamanhoString2=0; string2[tamanhoString2]!= '\0'; tamanhoString2++);
    tamanhoString2--;
    for(int i = tamanhoString1; i<tamanhoString1+tamanhoString2; i++){
        string1[i]=string2[contador];
        contador++;
    }
    string1[tamanhoString1 + tamanhoString2] = '\0';
    printf("Strings concatenadas: %s", string1);
}

int main(){
    char string1[50], string2[50];

    printf("Digite a primeira palavra: ");
    fgets(string1, 50, stdin);
    printf("Digite a segunda palavra: ");
    fgets(string2, 50, stdin);
    concatenaPalavras(string1, string2);
    return 0;
}