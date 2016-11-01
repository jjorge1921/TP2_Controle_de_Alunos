#include "TAluno.h"

lista_aluno criaListaAluno(){
    lista_aluno l = (lista_aluno)malloc(sizeof(tipo_lista_aluno));
    if(l){
        l->inicio = NULL;
        l->fim = NULL;
        l->tamanho = 0;
    }
    return l;
}

int buscaAluno(lista_aluno l,int mat,tipo_elemento_aluno *e){
    tipo_nodo_aluno *p;
    p=l->inicio;
    while(p){
        if(p->info.matricula == mat){
            *e=p->info;
            return 1;
        }else
            p=p->prox;
    }
    return 0;
}

int insereAluno(lista_aluno l,tipo_elemento_aluno e_aluno){
    tipo_nodo_aluno* p = (tipo_nodo_aluno*)malloc(sizeof(tipo_nodo_aluno));
    if(!p)
        return 0;
    p->info = e_aluno;
    p->disciplina = criaListaDisciplina();
    p->prox = NULL;
    if(!l->inicio)
        l->inicio = p;
    else
        l->fim->prox = p;
    l->fim = p;
    l->tamanho++;
    return 1;
}

int insereDisciplinaAluno(lista_aluno l_aluno,int mat,lista_disciplina l_disciplina,tipo_elemento_disciplina e_disciplina){
    tipo_nodo_disciplina* d;
    tipo_nodo_aluno* a;

    a=l_aluno->inicio;
    while(a){
        if(a->info.matricula==mat){
            d = (tipo_nodo_disciplina*)malloc(sizeof(tipo_nodo_disciplina));
            if(!d)
                return 0;
            d->info = e_disciplina;
            d->avaliacao = criaListaAvaliacao();
            d->prox = NULL;
            if(!a->disciplina->inicio)
                a->disciplina->inicio=d;
            else
                a->disciplina->fim->prox=d;
            a->disciplina->fim=d;
            a->disciplina->tamanho++;
        }else
            a=a->prox;
    }
    return 1;
}

void terminaListaAluno(lista_aluno l){
    tipo_nodo_aluno *p;

    while(l->inicio){
        p=l->inicio;
        l->inicio = l->inicio->prox;
        free(p);
    }
    free(l);
}

