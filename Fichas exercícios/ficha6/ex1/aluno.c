#include "aluno.h"
#include<stdio.h>
#include<string.h>

Aluno criarAluno(){
    Aluno a;

    printf("Introduza o nome: ");
    fflush(NULL);
    fgets(a.nome, MAX_NOME -1, stdin);
    a.nome[strlen(a.nome) -1 ] = '\0'; //remover \n
    printf("Introduza o numero: ");
    scanf("%d", &a.numero);
    do{
        printf("Introduza o metodo: (A - metodo A, B - metodo B): ");
        fflush(NULL);
        scanf("%c", &a.metodo);
    }while (a.metodo != 'A' && a.metodo != 'B');
    
    switch (a.metodo)
    {
    case METODO_A:
        a.avaliacao.metA = criarMetodoA();
        break;
    case METODO_B : 
        a.avaliacao.metB = criarMetodoB();
        break;
    }

    return a;
}


void imprimeAluno(Aluno a){
    printf("Aluno nº %d  \n\t- Nome: %s, Metodo - %c\n", a.numero, 
            a.nome, a.metodo);

}

