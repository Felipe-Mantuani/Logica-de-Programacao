#include <stdio.h>

int palindromo (char string[], int n, int contador){
    if (n==0) return 1;
    if (n==1) return 1;
    else{
        if (string[contador] == string[n]){
            return palindromo(string, n-1, contador+1);
        }
        else return 0;
    }
}

int main(){
    char string[100];
    int tamanho;
    scanf(" %99[^\n]", string);
    for(tamanho = 0; string[tamanho]!='\0'; tamanho++);
    tamanho--;
    palindromo(string, tamanho, 0)? printf("E um palindromo!!!") : printf("Nao e um palindromo");
}