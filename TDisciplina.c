#include <stdlib.h>
#include "TDisciplina.h"

lista_disciplina criaListaDisciplina(){
    lista_disciplina l = (lista_disciplina)malloc(sizeof(tipo_lista_disciplina));
    if(l){
        l->inicio = NULL;
        l->fim = NULL;
        l->tamanho = 0;
    }
    return l;
}

void terminaListaDisciplina(lista_disciplina l){
    tipo_nodo_disciplina *p;

    while(l->inicio){
        p=l->inicio;
        l->inicio = l->inicio->prox;
        free(p);
    }
    free(l);
}
