#ifndef TAVALIACAO_H_INCLUDED
#define TAVALIACAO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

/* Definição do TAD Avaliação. */
typedef struct{
    int codigo;
    char nome_avaliacao[60];
    float valor;
    float nota;
}tipo_elemento_avaliacao;

typedef struct nodo_avaliacao{
    tipo_elemento_avaliacao info;
    struct nodo_avaliacao *prox;
}tipo_nodo_avaliacao;

typedef struct{
    tipo_nodo_avaliacao *inicio, *fim;
    int tamanho;
}tipo_lista_avaliacao;

typedef tipo_lista_avaliacao* lista_avaliacao;

/* Funções de manipulação da lista. */

lista_avaliacao criaListaAvaliacao();
void terminaListaAvaliacao(lista_avaliacao);

#endif // TAVALIACAO_H_INCLUDED
