#include<stdio.h>

/*
 * Crie um programa que lê 5 valores inteiros e, 
 * em seguida, mostre-os no ecrã na ordem inversa 
 *  a que foram escritos
 */

int main(int argc, char const *argv[])
{
    int a[5], i = 0;
    do{
        printf("Introduza um numero: ");
        scanf("%d", &a[i++]);
    } while (i < 5);
    
    for (int i = 4; i >= 0; i--){
        printf("%d\n", a[i]);
    }
    

    return 0;
}
