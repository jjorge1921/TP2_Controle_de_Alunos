#include <stdlib.h>
#include "TAvaliacao.h"

lista_avaliacao criaListaAvaliacao(){
    lista_avaliacao l = (lista_avaliacao)malloc(sizeof(tipo_lista_avaliacao));
    if(l){
        l->inicio = NULL;
        l->fim = NULL;
        l->tamanho = 0;
    }
    return l;
}

void terminaListaAvaliacao(lista_avaliacao l){
    tipo_nodo_avaliacao *p;

    while(l->inicio){
        p=l->inicio;
        l->inicio = l->inicio->prox;
        free(p);
    }
    free(l);
}

