#include "turma.h"
#include<stdio.h>
int acrestentaAluno( Turma *t, Aluno a){
    a.ref = t->ref;
    t->ref++;
    if(t->tamanho == MAX_TURMA) return -1;
    t->alunos[t->tamanho++] = a;
    return 0;
}

int procura( Turma t, int numero){
    for (int i = 0; i < t.tamanho; i++){
        if(t.alunos[i].numero == numero) return i;
    }
    return -1;
}

Turma criarTurma(){
    Turma t;
    t.tamanho = 0;
    return t;
}

void imprimeTurma(Turma *t){
    for (int i = 0; i < t->tamanho; i++)
        imprimeAluno(t->alunos[i]);   
}

void save(Turma t){
    FILE *f;
    f = fopen("dados.dat", "wb");
    fwrite(&t, sizeof(Turma), 1, f);
    fclose(f);
}

Turma read(){
    Turma t;
    t = criarTurma();
    Aluno a;
    FILE *f;
    f = fopen("dados.dat", "rb");
    fread(&t, sizeof(Turma), 1, f);
    fclose(f);
    return t;
}