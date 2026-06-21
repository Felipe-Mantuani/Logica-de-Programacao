#include <stdio.h>

int main(){
    char string[100], substring[100];
    int tamanhoString, tamanhoSubstring, verificador, encontrou = 0;
    printf("Digite: ");
    fgets(string, 100, stdin);
    printf("Digite alguma substring: ");
    fgets(substring, 100, stdin);
    for(tamanhoString = 0; string[tamanhoString] != '\0'; tamanhoString++);
    if (string[tamanhoString-1] == '\n'){
        string[tamanhoString-1] = '\0';
        tamanhoString--;
    }
    for(tamanhoSubstring = 0; substring[tamanhoSubstring] != '\0'; tamanhoSubstring++);
    if (substring[tamanhoSubstring-1] == '\n'){
        substring[tamanhoSubstring-1] = '\0';
        tamanhoSubstring--;
    }

    if (tamanhoSubstring <= tamanhoString){
    for(int i = 0; i<=tamanhoString-tamanhoSubstring; i++){
            verificador = 1;
            for(int j = 0; j<tamanhoSubstring; j++){
                if(string[i+j] != substring[j]){
                    verificador = 0;
                    break;
                }
            }
            if (verificador){
                encontrou = 1;
                break;
            }
        }
    }
 
    (encontrou)?printf("%s e uma substring de %s!!!", substring, string) : printf("%s nao e uma substring de %s", substring, string);

    return 0;
}