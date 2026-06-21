#include <stdio.h>

int main()
{
    int a, b, fatorial;

    printf("Digite qual número que o seu intervalo começará: ");
    scanf("%i", &a);

    printf("Digite qual número que terminará o seu intervalo: ");
    scanf("%i", &b);

    for (int i = a; i <= b; i++) {
        fatorial = 1;

        for (int x = i; x >= 1; x--) {
            fatorial *= x;
        }

        printf("%i! = %i\n", i, fatorial);
    }

    return 0;
}