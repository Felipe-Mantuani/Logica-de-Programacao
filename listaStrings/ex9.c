//Letras minúsculas de '\(a\)' até '\(z\)' possuem valores inteiros que, subtraídos de \(32\), resultam em suas equivalentes maiúsculas
#include <stdio.h>

void converterParaMaiusculo(char string[]){
    int contagemCaracteres;
    for (contagemCaracteres = 0; string[contagemCaracteres] != '\0'; contagemCaracteres++);
    contagemCaracteres--;
    for (int i = 0; i<contagemCaracteres; i++){
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
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
    converterParaMaiusculo(string);

    return 0;
}