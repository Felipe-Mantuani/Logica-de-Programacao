#include <stdio.h>

int somatoria(int inicio, int n){
    if (n == 1) return 1;
    else return n+somatoria(1, n-1);
}

int main(){
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("A somatoria de 1 a %d e: %d", n, somatoria(1,n));
    return 0;
}