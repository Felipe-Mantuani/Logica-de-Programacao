#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

int main(){
    int v[MAX], i, rotacao;
    srand(time(NULL));
    for (i = 0; i < MAX; i++){
        printf(" %d", v[i] = rand()%10);
    }

    printf("\n[0] Rotacionar o vetor para a direita\n[1] Rotacionar o vetor para a esquerda\nOpcao: ");
    scanf("%d", &rotacao);
    
    if (rotacao == 0){
        printf("\nRotacionando o vetor para direita: ");
        int ultimo = v[MAX-1];
        for (i = MAX-1; i > 0; i--){
            v[i] = v[i-1];
        }
        v[0] = ultimo;
        for (i = 0; i < MAX; i++){
            printf(" %d", v[i]);
        }
        
    } else if (rotacao == 1){
        printf("\nRotacionando o vetor para esquerda: ");
        int primeiro = v[0];
        for (i = 0; i < MAX-1; i++ ){
            v[i] = v[i+1];
        }
        v[MAX-1] = primeiro;
                for (i = 0; i < MAX; i++){
            printf(" %d", v[i]);
        }
    }
    else printf("\nOpcao invalida!");


    return 0;
}