#include <stdio.h>

int main(){
    char string[100], substring[100];
    int tamanhoString, tamanhoSubstring, posicao;
    printf("Digite: ");
    fgets(string, 100, stdin);
    printf("Digite uma substring: ");
    fgets(substring, 100, stdin);
    printf("Digite a posicao que vai inserir a substring: ");
    scanf("%d", &posicao);

    for (tamanhoString = 0; string[tamanhoString]!='\0'; tamanhoString++){
        if (string[tamanhoString] == '\n'){
            string[tamanhoString] = '\0';
            break;
        }
    }

    for(tamanhoSubstring = 0; substring[tamanhoSubstring] != '\0'; tamanhoSubstring++){
        if (substring[tamanhoSubstring] == '\n'){
            substring[tamanhoSubstring] = '\0';
            break;
        }
    }
    if (posicao >= 0 && posicao <= tamanhoString){
       for (int i = tamanhoString; i >= posicao; i--) {
            string[i + tamanhoSubstring] = string[i];
        }

        // 2. Copia a substring para o espaço que foi liberado
        for (int i = 0; i < tamanhoSubstring; i++) {
            string[posicao + i] = substring[i];
        }

        // Exibe o resultado final
        printf("Resultado: %s\n", string);
    } 
    else {
        printf("Posicao invalida!\n");
    }

    return 0;
}