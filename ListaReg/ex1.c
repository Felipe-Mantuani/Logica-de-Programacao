#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} TData;

typedef struct{
    char nome[100];
    char nacionalidade[100];
    TData dataNascimento;
} TAutor;

typedef struct{
    char titulo[100];
    TData dataPublicacao;
    TAutor autores[10];
    int quantidade_paginas;
} TLivro;

TLivro lerLivro(void){
    TLivro livro;
    int quantidade;
    printf("\n\nCADASTRO DE LIVRO\n\n");
    printf("Digite o titulo do livro: ");
    fgets(livro.titulo, 100, stdin);
    for(int i = 0; livro.titulo[i]!='\0'; i++){
        if (livro.titulo[i] == '\n'){
            livro.titulo[i] = '\0';
            break;
        }
    }
    printf("Digite a data de publicacao no seguinte formato (dd mm yy): ");
    scanf("%d %d %d", &livro.dataPublicacao.dia, &livro.dataPublicacao.mes, &livro.dataPublicacao.ano);
    while(getchar() != '\n');
    printf("Digite a quantidade de paginas do livro: ");
    scanf("%d", &livro.quantidade_paginas);
    while(getchar() != '\n');
    printf("Digite a quantidade de autores: ");
    scanf("%d", &quantidade);
    if(quantidade < 1) quantidade = 1;
    if (quantidade > 10) quantidade = 10;
    for(int i = 0; i<quantidade; i++){
        printf("Autor %d:\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", livro.autores[i].nome);
        printf("Nacionalidade: ");
        scanf(" %[^\n]", livro.autores[i].nacionalidade);
        printf("Digite a data de nascimento do autor: (dd mm yy): ");
        scanf("%d %d %d", &livro.autores[i].dataNascimento.dia, &livro.autores[i].dataNascimento.mes, &livro.autores[i].dataNascimento.ano);
        while(getchar() != '\n');
    }
    for(int i = quantidade; i <10; i++){
        livro.autores[i].nome[0] = '\0';
    }
    
    return livro;
}

void imprimirLivro(TLivro l){
    printf("\n\nDADOS DO LIVRO: \n\n");
    printf("Titulo: %s\n", l.titulo);
    printf("Data de publicacao: %d/%d/%d\n", l.dataPublicacao.dia, l.dataPublicacao.mes, l.dataPublicacao.ano);
    printf("Autores:\n");
    for(int i = 0; i < 10 && l.autores[i].nome[0]!= '\0'; i++){
        printf("\tnome: %s\n", l.autores[i].nome);
        printf("\tdata de nascimento: %d/%d/%d\n", l.autores[i].dataNascimento.dia, l.autores[i].dataNascimento.mes, l.autores[i].dataNascimento.ano);
        printf("\tNacionalidade: %s\n", l.autores[i].nacionalidade);
    }
}

void imprimirLivroPagina(TLivro livros[], int n){
    for (int i = 0; i < n; i++){
        if (livros[i].quantidade_paginas>300){
            printf("\n\n\t\tDADOS DO LIVRO:\n\n");
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autores:\n");
            for(int j = 0; j<10 && livros[i].autores[j].nome[0] != '\0'; j++){
                printf("\t%s\n", livros[i].autores[j].nome);
            }
        }
    }
}


int main(){
    TLivro livros[100];
    livros[0] = lerLivro();
    imprimirLivro(livros[0]);
    printf("\n\nLivros acima de 300 paginas: ");
    imprimirLivroPagina(livros, 1);
    return 0;
}