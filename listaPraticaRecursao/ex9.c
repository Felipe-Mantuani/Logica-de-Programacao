#include <stdio.h>

void inversaoString(char string[], int tamanho){
    if (tamanho == 0){
        printf("%c", string[tamanho]);
    }
    else{
        printf("%c", string[tamanho]);
        inversaoString(string, tamanho-1);
    }
}

int main(){
    int tamanho;
    char string[100];
    scanf("%99[^\n]", string);
    for(tamanho = 0; string[tamanho] != '\0'; tamanho++);
    inversaoString(string, tamanho);

    return 0;
}

