#include "avaliacao.h"

#define MAX_NOME 100
typedef struct sAluno{
    char nome[MAX_NOME];
    int numero;
    int ref;
    Avaliacao avaliacao;
    Metodo metodo;
} Aluno;

Aluno criarAluno();

void imprimeAluno(Aluno a);

Aluno* procuraAluno(Turma t, int numero);