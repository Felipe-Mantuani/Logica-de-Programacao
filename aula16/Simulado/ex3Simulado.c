#include <stdio.h>

int ordemDecrescente(int v[], int tamanho){
    if (tamanho <= 1){
        return 1;
    }
    else {
        if (v[tamanho-1] > v[tamanho-2]) return 0;
        else return ordemDecrescente(v, tamanho-1);
    }
}

int main(){
    int vetor[5] = {5, 4, 3, 2, 1, 0};
    return 0;
}