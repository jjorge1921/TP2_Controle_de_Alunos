#ifndef TDISCIPLINA_H_INCLUDED
#define TDISCIPLINA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "TAvaliacao.h"

/* Definição do TAD Disciplina. */
typedef struct{
    int codigo;
    char nome_disciplina[60];
}tipo_elemento_disciplina;

typedef struct nodo_disciplina{
    tipo_elemento_disciplina info;
    struct nodo_disciplina *prox;
    lista_avaliacao avaliacao; /* Campo do tipo lista_avaliacao para armazenar os dados
                                    das avaliações da disciplina. */
}tipo_nodo_disciplina;

typedef struct{
    tipo_nodo_disciplina *inicio, *fim;
    int tamanho;
}tipo_lista_disciplina;

typedef tipo_lista_disciplina* lista_disciplina;

/* Funções de manipulação da lista. */

lista_disciplina criaListaDisciplina();
void terminaListaDisciplina(lista_disciplina);


#endif // TDISCIPLINA_H_INCLUDED
