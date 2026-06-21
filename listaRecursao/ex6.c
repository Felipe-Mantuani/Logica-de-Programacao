#include <stdio.h>

void verificarImpar(int inicio){
    if (inicio == 19){
        printf("%d e impar\n", inicio);
    }
    else {
        if (inicio % 2 != 0){
            printf("%d e impar\n", inicio);
        }
            verificarImpar(inicio+1);
    }
}

int main(){
    verificarImpar(1);
}