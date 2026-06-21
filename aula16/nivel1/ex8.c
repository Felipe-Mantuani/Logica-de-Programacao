#include <stdio.h>


int main(){
    char string[100];
    int contador = 0;
    scanf("%[^\n]", string);
    int tamanho;
    for (tamanho = 0; string[tamanho] != '\0'; tamanho++);
    for(int i = 0; i<tamanho/2; i++){
        char temp = string[i];            
        string[i] = string[tamanho - 1 - i];  
        string[tamanho - 1 - i] = temp;         
    }
    printf("%s", string);
}