#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    int v[MAX], i, num;
    srand(time(NULL));
    for (i = 0; i<MAX; i++){
        printf("%i ", v[i] = rand()%10);
    }
    printf("\nDigite um numero inteiro: ");
    scanf("%i", &num);

    for (i = 0; i<MAX; i++){
        if (v[i]==num) printf("\nElemento %i contido no vetor!", num);
        else printf("\nElemento %i não contido no vetor.", num);
    }
    return 0;
}