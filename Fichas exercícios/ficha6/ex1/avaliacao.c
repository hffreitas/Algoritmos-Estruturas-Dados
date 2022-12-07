#include "avaliacao.h"
#include<stdio.h>


MetodoA criarMetodoA(){
    MetodoA metA;
    for (int i = 0; i < NR_MINI_TESTES; i++)
    {
       printf("Introduzir nota do mini-teste %d: ", i+1);
       scanf("%d", &metA.mini_testes[i]);
    }

    printf("Introduzir nota do teste: ");
    scanf("%d", &metA.teste);

    printf("Introduzir nota do exame: ");
    scanf("%d", &metA.exame);

    return metA;
    
}

MetodoB criarMetodoB(){
    MetodoB metB;
    
    printf("Introduzir nota do teste: ");
    scanf("%d", &metB.teste);

    printf("Introduzir nota do exame: ");
    scanf("%d", &metB.exame);

    return metB;
    
}