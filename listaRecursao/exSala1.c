#include <stdio.h>

int digitos (int x){
    if (x<10) return 1;
    else return 1 + digitos(x/10);
}

int main(){
    int n;
    printf("Digite algum numero: ");
    scanf("%d", &n);
    printf("Tem %d digitos", digitos(n));

    return 0;
}