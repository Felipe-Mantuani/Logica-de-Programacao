#include <stdio.h>
int fib(int x){
    if (x <= 0){
        return 0;
    }
    else if (x==1) return 1;
    else{
        return fib(x-1)+ fib(x-2);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Fibonnaci: %d", fib(n));
    
    return 0;
}