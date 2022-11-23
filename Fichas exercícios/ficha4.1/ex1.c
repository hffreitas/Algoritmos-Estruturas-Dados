#include<stdio.h>

/*
 * Dado um vetor que armazena 6 números inteiros, 
 * o programa deverá executar os seguintes passos
 */
int main(int argc, char const *argv[]){
    /* Atribua os seguintes valores a esse 
    * vetor: 1, 0, 5, -2, -5, 7.
    */ 
    int v[6] = {1,0,5,-2,-5,7};
    /*Armazena numa variável inteira a soma entre os 
    * valores nas posições 0, 1 e 5 do vetor e mostrar 
    * no ecrã essa soma.*/
    int soma = v[0] + v[1] + v[5];
    printf("Soma: %d\n", soma);
    /* Modifica o vetor na posição 4, 
    atribuindo a esta posição o valor 100*/ 
    v[4] = 100;
    /*Mostra no ecrã cada valor deste array, 
 * um em cada linha*/
    for (int i = 0; i < 6; i++) 
        printf("%d\n", v[i]);
    return 0;
}
