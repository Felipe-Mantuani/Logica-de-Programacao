#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    int v[MAX], frequencia[101], i;
    
    srand(time(NULL));
    printf("Vetor: ");
    for (i = 0; i < MAX; i++){
        v[i] = rand() % 101;
        printf("%d ", v[i]);
    }

    for (i = 0; i <= 100; i++){
        frequencia[i] = 0;
    }
    
    for (i = 0; i < MAX; i++){
        frequencia[v[i]]++;
    }
    
    printf("\nFrequencias:\n");
    for (i = 0; i <= 100; i++){
        if (frequencia[i] > 0){
            printf("Valor %d aparece %d vez(es)\n", i, frequencia[i]);
        }
    }

    return 0;
}