#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

int main(){
    int v[MAX], i, par = 0;
    srand(time(NULL));
    for (i = 0; i < MAX; i++){
        printf("%i ", v[i] = rand()%100);
    }
    for (i= 0; i < MAX; i++){
        if (v[i]%2 == 0) par += 1;
    }
    printf("\nTem %i valores pares no vetor", par);
    return 0;
}