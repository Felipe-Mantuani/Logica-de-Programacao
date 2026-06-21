#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

int main(){
    int v[MAX], i, soma = 0;
    for (i = 0; i < MAX; i++){
        printf("%i ", v[i] = rand()%100);
    }
    for ( i = 0; i < MAX; i++){
        soma += v[i];
    }
    printf("\nSoma = %i", soma);
    return 0;
}