#include "aluno.h"

#define MAX_TURMA 100
typedef struct sTurma
{
    Aluno alunos [MAX_TURMA];
    int tamanho;
    int ref;
}Turma;

int acrestentaAluno( Turma *t, Aluno a);
int procura( Turma t, int numero);
Turma criarTurma();
void imprimeTurma(Turma *t);

void save(Turma t);
Turma read();
