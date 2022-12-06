#include<stdio.h>
#include "aluno.h"

int main(int argc, char const *argv[]){
    Turma t;
    for (int i = 0; i < 3; i++)
    {
        t[i] = createAluno();
    }
    for (int i = 0; i < 3; i++)
    {
       writeAluno(&t[i]);
    }

    changeAlunoEstatuto(&t[0], ESTUDANTE);
    return 0;
}
