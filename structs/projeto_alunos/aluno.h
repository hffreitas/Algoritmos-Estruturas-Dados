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
void changeAlunoEstatuto(Aluno* a, Estatuto e);