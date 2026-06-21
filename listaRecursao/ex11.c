#include <stdio.h>

int fat(int x){
    if (x==1) return 1;
    else return x*(fat(x-1));
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(int i = 1; i<= n; i++){
        printf("%d! = %d\n", i, fat(i));
    }
}