//Comparação de Vetores: Escreva um programa que compara dois vetores e determina se eles
//são iguais (mesmo tamanho e elementos idênticos nas mesmas posições).
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, i, verificador;
    printf("Escolha o tamanho do primeiro vetor: ");
    scanf("%d", &n1);
    printf("\nEscolha o tamanho do segundo vetor: ");
    scanf("%d", &n2);
    int v1[n1], v2[n2];

    printf("\nDigite %d numeros inteiros para o primeiro vetor: ", n1);
    for (i = 0; i < n1; i++){
        scanf("%d", &v1[i]);
    }

    printf("\nDigite %d numeros inteiros para o segundo vetor: ", n2);
    for (i=0; i<n2; i++){
        scanf("%d", &v2[i]);
    }
    
    if (n1!=n2){
        printf("\nOs vetores tem tamanhos diferentes");
    }
    else{
        for (i=0; i<n1; i++){
            verificador = 0;
            if (v1[i] == v2[i]) verificador = 1;
        }
        if (verificador) printf("\nOs 2 vetores sao identicos!");
        else printf("\nOs 2 vetores tem o mesmo tamanho, porem nao tem os mesmos valores");
    }
}