#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Sistema.h"

int main(){
    setlocale(LC_ALL,"");
    inicio();
    cabecalho();
    printf("\n\n\tO programa foi encerrado. Pressione ENTER para fechar a janela...\n\n\n\n");
    getchar();

    return 0;
}
