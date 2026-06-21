#include <stdio.h>
#define MAX 5

int main(){
    int v[MAX], i;

    for (i = 0; i < MAX; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Elementos sem duplicatas: ");
    for (i = 0; i < MAX; i++){
        int repetido = 0;

        for (int j = 0; j < i; j++){
            if (v[i] == v[j]){
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            printf("%d ", v[i]);
        }
    }

    return 0;
}