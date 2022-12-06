#include "aluno.h"
#include<stdio.h>
#include<string.h>
void writeAluno(Aluno* a){
    printf("Nome: %s, Email: %s, Nr Identificacao: %ld, Morada:%s\n",
               a->nome, a->email, a->nr_identificacao, a->morada);
}

void changeAlunoEstatuto(Aluno* a, Estatuto e){
    a->est = e;
}

Aluno createAluno(){
    Aluno a;
    printf("Introduza o nome:");
    fgets(a.nome, MAX_STR - 1, stdin);
    a.nome[strlen(a.nome) - 1] = '\0';
    printf("Introduza o email:");
    fgets(a.email, MAX_STR - 1, stdin);
    a.email[strlen(a.email) - 1] = '\0';
    printf("Introduza o Nr Identificacao:");
    scanf("%ld", &a.nr_identificacao);
    fflush(NULL);
    printf("Introduza a morada:");
    fgets(a.morada, MAX_STR - 1, stdin);
    a.morada[strlen(a.morada) - 1] = '\0';
    printf("Indique o estatuto (0 - Estudante, 1 - T_E, 2- N_E ): ");
    scanf("%d", &a.est);
    fflush(NULL);
    return a;
}