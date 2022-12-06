#include <string.h>
#include <stdio.h>

#define MAX_STR 100

typedef enum enum_Estatuto
{
    ESTUDANTE = 0,
    T_E = 1,
    N_E = 2,
} Estatuto;

typedef struct sAluno
{
    char nome[MAX_STR];
    char email[MAX_STR];
    long nr_identificacao;
    char morada[MAX_STR];
    Estatuto est;
} Aluno;

typedef Aluno Turma[100];

Aluno createAluno();
void writeAluno(Aluno* a);

int main(int argc, char const *argv[])
{
    Aluno b;
    Turma t;
    Aluno a;
    for (int i = 0; i < 3; i++){
        t[i] = createAluno(); 
    }

    for (int i = 0; i < 3; i++)
    {
        writeAluno(&t[i]);
    }
    return 0;
}

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