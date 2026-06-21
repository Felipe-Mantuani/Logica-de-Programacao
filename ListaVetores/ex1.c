#include <stdio.h>
#define MAX 10

int main(){
    int v[MAX], i;
    for (i=0; i< MAX; i++){
        printf("Digite um numero: ");
        scanf("%i", &v[i]);
    }
    for (i=0; i< MAX; i++){
        printf("%d ", v[MAX-1-i]);
    }
    return 0;
}