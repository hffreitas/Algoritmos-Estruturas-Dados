#include<string.h>
#include<stdio.h>

#define MAX_STR 100

enum Estatuto{
    ESTUDANTE = 0,
    T_E = 1,
    N_E = 2,
};

struct Aluno{
    char nome[MAX_STR];
    char email[MAX_STR];
    long nr_identificacao;
    char morada[MAX_STR];
    enum Estatuto est;
};

int main(int argc, char const *argv[])
{  
    struct Aluno turma[30];
    struct Aluno a;
    for ( int i = 0; i< 3; i++){
        printf("Introduza o nome:");
        fgets(a.nome, MAX_STR -1,stdin);
        a.nome[strlen(a.nome)-1] = '\0';
        printf("Introduza o email:");
        fgets(a.email, MAX_STR -1,stdin);
        a.email[strlen(a.email)-1] = '\0';
        printf("Introduza o Nr Identificacao:");
        scanf("%ld", &a.nr_identificacao);
        fflush(NULL);
        printf("Introduza a morada:");
        fgets(a.morada, MAX_STR -1,stdin);
        a.morada[strlen(a.morada)-1] = '\0';
        printf("Indique o estatuto (0 - Estudante, 1 - T_E, 2- N_E ): ");
        scanf("%d", &a.est);
        fflush(NULL);
        turma[i] = a;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Nome: %s, Email: %s, Nr Identificacao: %ld, Morada:%s\n", 
        turma[i].nome, turma[i].email, turma[i].nr_identificacao, turma[i].morada);
    }
    return 0;
}
