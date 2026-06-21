#include <stdio.h>

//forma recursiva
int divisao(int a, int b){
    if (a<b){
        return 0;
    }
    else return 1 + divisao(a-b, b);
}

//forma iterativa
int divisaoIterativo(int a, int b){
    int count = 0;
    while (a >= b){
        a -= b;
        count++;
    }
    return count;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("recursiva: %d\n", divisao(a,b));
    printf("iterativa: %d\n", divisaoIterativo(a,b));
    return 0;
}