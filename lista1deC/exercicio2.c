#include <stdio.h>
int main (){
    float latao, cobre, zinco;
    printf("Digite a quantidade de latão em gramas: ");
    scanf("%f", &latao);
    cobre = latao * 0.70;
    zinco = latao * 0.30;
    
    printf("Para essa quantidade de latão, é preciso de:\ncobre: %.2fg\nzinco: %.2fg", cobre, zinco);
    return 0;
}