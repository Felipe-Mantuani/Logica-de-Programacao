#include <stdio.h>

int main(){
    int contadorVogais = 0, contadorConsoantes = 0, tamanho, letras = 0;
    char vogais[11] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    char string[50];
    printf("Digite: ");
    fgets(string, 50, stdin);
    for (tamanho = 0; string[tamanho] != '\0'; tamanho++)
    if (string[tamanho] == '\n'){
        string[tamanho] = '\0';
        tamanho--;
    }

    for (int i = 0; i < tamanho; i++){
        if ((string [i] >= 'a' && string[i]<='z') || (string[i] >= 'A' && string[i]<= 'Z')){
            letras++;
            for (int j = 0; j<11; j++){
                if (string[i] == vogais[j]){
                    contadorVogais ++;
                    break;
                }
            }
        }
    }
    contadorConsoantes = letras - contadorVogais;
    printf("Quantidades de vogais: %d", contadorVogais);
    printf("\nQuantidadde de consoantes: %d", contadorConsoantes);
}