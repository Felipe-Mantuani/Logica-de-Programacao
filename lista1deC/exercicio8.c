#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Digite o início do intervalo: ");
    scanf("%i", &a);
    printf("Digite o fim do intervalo: ");
    scanf("%i", &b);
    for (int i = a; i <= b; i++){
        if (i>1){
            int primo = 1;
            int raiz = sqrt(i);
            for (int j = 2; j <= raiz; j++){
                if (i % j == 0){
                    primo = 0;
                    break;
                }
            }
            if (primo == 1){
                printf("%i é primo!\n", i);
            }
        }
        
    }

    return 0;
}