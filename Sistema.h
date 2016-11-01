#ifndef SISTEMA_H_INCLUDED
#define SISTEMA_H_INCLUDED
#include "TAvaliacao.h"
#include "TDisciplina.h"
#include "TAluno.h"

void cadastrarAluno(lista_aluno, lista_disciplina);
void inicio();
void cabecalho();
void menu();
void limparTela();
void limparBuffer();
void pause();
void lerString(char *, char *, int);

#endif // SISTEMA_H_INCLUDED
