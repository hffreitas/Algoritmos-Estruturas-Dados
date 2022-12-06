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
    struct Aluno a;
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

    printf("Nome: %s, Email: %s, Nr Identificacao: %ld\n, Morada:%s", 
        a.nome, a.email, a.nr_identificacao, a.morada);

    switch (a.est){
    case ESTUDANTE:
        printf("1 exame e 1 teste\n");
        break;
    case T_E:
        printf("2 exame e 1 teste\n");
        break;
    case N_E:
        printf("0,5 exame e 0,5 teste\n");
        break;
    
    default:
        break;
    }
    
    return 0;
}
