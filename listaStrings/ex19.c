#include <stdio.h>

int main(){
    char string[100];
    int contDigitos = 0;
    printf("Digite: ");
    fgets(string, 100, stdin);
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == '\n'){
            string[i] = '\0';
            break;
        }
    }

    for(int i = 0; string[i]!='\0'; i++){
        if (string[i] >= '0' && string[i] <= '9'){
            contDigitos ++;
        }
    }

    printf("A string tem %d digitos!", contDigitos);
    return 0;
}