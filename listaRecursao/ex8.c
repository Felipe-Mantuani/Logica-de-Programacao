#include <stdio.h>

void mostrarPar(int inicio, int fim){
    if (inicio == fim){
        if (inicio % 2 == 0){
            printf(" %d ", inicio);
        }
    }
    else{
        if (inicio %2 == 0){
            printf(" %d ", inicio);
        }
        mostrarPar(inicio+1, 20);
    }
}

int main(){
    mostrarPar(1, 20);
    return 0;
}