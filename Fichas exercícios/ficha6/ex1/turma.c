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
    //declarar turma
    Turma t;
    t = criarTurma(); //garantir que inicialmente o tamanho da turma e 0
    // ler do ficheiro e carregar os dados na Turma t
    FILE *f;
    f = fopen("dados.dat", "rb");
    if (f == NULL) return t;
    fread(&t, sizeof(Turma), 1, f);
    fclose(f);
    return t;
}