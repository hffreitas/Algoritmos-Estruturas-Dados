#include "turma.h"
#include<string.h>
#include<stdio.h>

void menu();

int main(int argc, char const *argv[])
{
    Turma t = read();

    menu(&t);

    return 0;
}


void menu(Turma *t){
    int opcao; 
    do{
        printf("########  Gestao de turma ########\n");
        printf(" 1 - Introduzir aluno\n 2 - Consultar alunos\n 0- Sair\n\n");
        printf("Introduza a opção pretendida: ");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                acrestentaAluno(t, criarAluno());
                break;
            case 2:
                imprimeTurma(t);
                break;
            case 0: 
                save(*t);
                break;
            default:
                break;
        }
    } while (opcao != 0);
}
