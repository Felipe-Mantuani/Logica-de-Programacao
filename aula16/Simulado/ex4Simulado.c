#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} TData;

typedef struct{
    char nome[100];
    char tel[100];
    char cidade[100];
    TData compra, venda;
} TProprietarios;

typedef struct{
    char descricao[500];
    float valor;
} TAcc;

typedef struct{
    char modelo[50];
    char marca[50];
    int km;
    int ano;
    TProprietarios proprietarios[5];
    TAcc acessorios;
} TCarro;


int main(){
    TCarro carros[100];
    int c;
    for(int c = 0; c<100; c++){
        printf("Impressao dados carro %d: \n", c+1);
        puts(carros[c].modelo);
        puts(carros[c].marca);
        printf("\nKM: %d", carros[c].km);
    }

    return 0;
}