#include <stdio.h>

int mdc(int a, int b){
    if (a % b == 0){
        return b;
    }
    else{
        return mdc(b, a % b);
    }
}

int main(){
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("O maior divisor comum e: %d", mdc(a,b));
}