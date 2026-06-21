#include <stdio.h>

int main()
{
    int numero, peso, numeradorMedia,denominadorMedia, media;
    numero = 0;
    peso = 0;
    numeradorMedia = 0;
    denominadorMedia = 0;
    printf("Digite um número inteiro (Digite '-1' para parar o programa): ");
    scanf ("%i", &numero);
    while(numero != -1){
        printf("Digite o peso: ");
        scanf("%i", &peso);
        
        if (numero >= 0 && peso >= 0){
            denominadorMedia += peso;
            numeradorMedia += numero * peso;
        } else {
            printf("Digite o numero e peso positivos e inteiros!\n");
        }
        printf("Digite um número inteiro (Digite '-1' para parar o programa): ");
        scanf ("%i", &numero);
        
    }
    media = numeradorMedia / denominadorMedia;
    if (media >=0){
      printf("Média ponderada: %i", media);
    }

    return 0;
}