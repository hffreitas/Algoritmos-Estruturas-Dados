#include<stdio.h>

int main(int argc, char const *argv[])
{
    float notas[100];
    int n_alunos= 0, qtd = 0;
    float soma = 0, media; 

    printf("Quantos alunos sao: ");
    scanf("%d", &n_alunos);
    if( n_alunos >100){ 
        printf("Excedeu o maximo permitido");
        return -1;
    }
    for (int i = 0; i < n_alunos; i++){
        printf("Introduza a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma/n_alunos;
    
    for (int i = 0; i < n_alunos; i++){
        if (notas[i] > media) qtd++;
    }

    printf("A qtd de alunos com nota superior a media e: %d\n", qtd);

    return 0;
}
