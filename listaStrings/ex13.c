#include <stdio.h>

void remocaoCaractereEspecial(char string[]){
    int contador = 0;
    for (int i = 0; string[i] != '\0'; i++){
        if ((string[i] >= 'A' && string[i]<='Z') || (string[i] >= 0 && string[i] <= 9) || (string[i] >= 'a' && string[i] <= 'z') ){
            string[contador] = string[i];
            contador ++;
        }
    }
    string[contador+1] = '\0';
    printf("%s", string);
}

int main(){
    char string[50];
    printf("Digite: ");
    fgets(string, 50, stdin);
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == '\n'){
            string[i] = '\0';
            break;
        }
    }
    remocaoCaractereEspecial(string);

    return 0;
}