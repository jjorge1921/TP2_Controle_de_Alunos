#ifndef TALUNO_H_INCLUDED
#define TALUNO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "TDisciplina.h"

/* Definição do TAD Aluno. */
typedef struct{
    int matricula;
    char nome_aluno[60];
    char data_nascimento[11];
}tipo_elemento_aluno;

typedef struct nodo_aluno{
    tipo_elemento_aluno info;
    struct nodo_aluno *prox;
    lista_disciplina disciplina; /* Campo do tipo lista_disciplina para armazenar os dados
                                    das disciplinas do aluno. */
}tipo_nodo_aluno;

typedef struct{
    tipo_nodo_aluno *inicio, *fim;
    int tamanho;
}tipo_lista_aluno;

typedef tipo_lista_aluno* lista_aluno;

/* Funções de manipulação da lista. */

lista_aluno criaListaAluno();
int insereAluno(lista_aluno,tipo_elemento_aluno);
int buscaAluno(lista_aluno,int,tipo_elemento_aluno*);
int insereDisciplinaAluno(lista_aluno,int,lista_disciplina,tipo_elemento_disciplina);
void terminaListaAluno(lista_aluno);

#endif // TALUNO_H_INCLUDED
