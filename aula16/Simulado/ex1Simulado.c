#include <stdio.h>

int troca(char string[]){
    int contador = 0;
    for(int i = 0; string[i] != '\0'; i++){
        if((string[i]<'A' || string[i]>'Z') && (string[i]<'a' || string[i]> 'z')){
            string[i] = '*';
            contador ++;
        } 
    }
    printf("%s", string);
    return contador-1;
}

int main(){
    char string[100];
    fgets(string, 100, stdin);
    printf("\n%d", troca(string));
}