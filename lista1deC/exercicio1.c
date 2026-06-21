
#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite um numero que comecara o intervalo: ");
    scanf("%d", &a);
    printf("Digite um numero que terminara o intervalo: ");
    scanf("%d", &b);
    
    printf("Multiplos de 9 ou 19 no intervalo:\n");
    for (int i = a; i <= b; i++){
        if (i%9==0 || i%19==0){
            printf("%d\n", i);
        }
    }
    return 0;
}