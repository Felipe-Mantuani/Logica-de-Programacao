#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(){
    int v[MAX], i, num, par =0;
    srand(time(NULL));
    for (i = 0; i<MAX; i++){
        printf("%i ", v[i] = rand()%10);
    }
    printf("\nDigite um numero: ");
    scanf("%i", &num);
    for (i = 0; i < MAX - 1; i++){
        for (int j = i+1; j < MAX; j++){
            if (v[i]+ v[j] == num){
                printf("\nPosicoes %d e %d somam %d ", i, j, num);
            }
        }
    }
    return 0;
}