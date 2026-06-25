#include <stdio.h>

int somatorio (int inicio, int fim){
    if (inicio == fim){
        return inicio;
    }
    else{
        return inicio+(somatorio(inicio+1, fim));
    }
}

int main(){
    printf("%d", somatorio(1, 20));
}