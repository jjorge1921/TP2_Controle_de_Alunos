#include <stdio.h>
#include <string.h>
#include "Sistema.h"


void cadastrarAluno(lista_aluno l_aluno, lista_disciplina l_disciplina){
    tipo_elemento_aluno e_aluno;
    tipo_elemento_disciplina e_disciplina;
    printf("\nForne�a a matr�cula: ");
    scanf("%d",&e_aluno.matricula);
    if(buscaAluno(l_aluno,e_aluno.matricula,&e_aluno)){
       printf("\nMatr�cula repetida!!\n");
       pause();
    }
    else{
       limparBuffer();
       lerString("\nNome do aluno: ",e_aluno.nome_aluno,60);
       limparBuffer();
       lerString("\nData de nascimento: ",e_aluno.data_nascimento,11);
       limparBuffer();
       if(insereAluno(l_aluno,e_aluno)){
            printf("\nForne�a o c�digo da disciplina: ");
            scanf("%d",&e_disciplina.codigo);
            limparBuffer();
            lerString("\nNome da disciplina: ",e_disciplina.nome_disciplina,60);
            limparBuffer();
            if(insereDisciplinaAluno(l_aluno,e_aluno.matricula,l_disciplina,e_disciplina))
               printf("\nInser��o realizada com sucesso!!");
            else
                printf("\nErro na inser��o!!");

            pause();
       }
       else
            printf("\nErro na insercao!!");
    }
}

void inicio(){
    int op;
    /* As listas de alunos, disciplinas e avalia��es s�o criadas. */
    lista_aluno l_aluno = criaListaAluno();
    lista_disciplina l_disciplina = criaListaDisciplina();
    lista_avaliacao l_avaliacao = criaListaAvaliacao();
    /* Se n�o ocorreu nenhum problema na cria��o das listas, o menu de op��es � apresentado. */
    if(l_aluno && l_disciplina && l_avaliacao){
        do{
            menu();
            printf("\n\n\tForne�a uma op��o: ");
            limparBuffer();
            scanf("%d", &op);

            limparTela();
            switch(op){
                /* Carregar */
                case 1: break;
                /* Cadastrar aluno */
                case 2: cadastrarAluno(l_aluno,l_disciplina); break;
                /* Cadastrar disciplina do aluno */
                case 3: break;
                /* Cadastrar avalia��o da disciplina */
                case 4: break;
                /* Verificar integridade */
                case 5: break;
                /* Excluir aluno */
                case 6: break;
                /* Excluir disciplina */
                case 7: break;
                /* Excluir avaliacao */
                case 8: break;
                /* Relat�rio de alunos aprovados */
                case 9: break;
                /* Relat�rio de alunos reprovados */
                case 10:break;
                /* Gravar */
                case 11:break;
                /* Alterar nota */
                case 12:break;
                /* Consultar dados do aluno */
                case 13:break;
                /* Listagem */
                case 14:break;
                default:
                    if(op != 0){
                        cabecalho();
                        printf("\n\tOp��o inv�lida.\n");
                        pause();
                    }
                break;
            }
        }while(op != 0);
        /* As listas s�o encerradas. */
        terminaListaAluno(l_aluno);
        terminaListaDisciplina(l_disciplina);
        terminaListaAvaliacao(l_avaliacao);
    }
}

void cabecalho(){
    printf("\n\t====================================================\n\n");
    printf("\t\tSistema para Controle de Alunos");
    printf("\n\n\t====================================================\n");
}

void menu(){
    limparTela();
    cabecalho();
    printf("\n\n\t\t\t\tOp��es\n\n");
    printf("\n\t[1]   Carregar");
    printf("\n\t[2]   Cadastrar aluno");
    printf("\n\t[3]   Cadastrar disciplina do aluno");
    printf("\n\t[4]   Cadastrar avalia��o da disciplina");
    printf("\n\t[5]   Verificar integridade");
    printf("\n\t[6]   Excluir aluno");
    printf("\n\t[7]   Excluir disciplina");
    printf("\n\t[8]   Excluir avalia��o");
    printf("\n\t[9]   Relat�rio de alunos aprovados");
    printf("\n\t[10]  Relat�rio de alunos reprovados");
    printf("\n\t[11]  Gravar");
    printf("\n\t[12]  Alterar nota");
    printf("\n\t[13]  Consultar dados do aluno");
    printf("\n\t[14]  Listagem");
    printf("\n\n\t[0] Sair");
}

/* Limpa a tela de sa�da do programa. */
void limparTela(){
    system("cls || clear");
}

/* Limpa o buffer de entrada. */
void limparBuffer(){
    setbuf(stdin, NULL);
}

/* Paralisa o programa aguardando que o usu�rio tecle algum d�gito. */
void pause(){
    setbuf(stdin, NULL);
    printf("\n\n\tPressione ENTER para continuar...");
    getchar();
}

/* Realiza a entrada de cadeias de caracteres no programa. */
void lerString(char *mensagem, char *variavel, int tamanho){
  limparBuffer();
  printf(mensagem);
  fgets(variavel, tamanho, stdin);

  /* Retira o \n da string. */
  if(variavel[strlen(variavel)-1] == '\n')
     variavel[strlen(variavel)-1] = '\0';
  limparBuffer();
}
