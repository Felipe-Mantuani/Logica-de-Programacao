#include <stdio.h>

int fat(int x) {
    if (x == 1) {
        printf("1! = 1\n");
        return 1;
    }
    int resultado = x * fat(x - 1);
    printf("%d! = %d\n", x, resultado);
    
    return resultado;
}

int main() {
    printf("Fatorial de 1 a 10:\n");
    fat(10); 
    return 0;
}
