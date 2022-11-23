#include<stdio.h>
/*
 * Crie um programa que preencha um array de 
 * tamanho 100 com os 100 primeiros naturais que 
 * não são múltiplos de 7 ou que terminam com 7.
 */

int main(int argc, char const *argv[])
{
    int a[100];
    int numeroNatural =0, i =0;
    while( i < 100){
        if(numeroNatural%7 == 0 || numeroNatural%10==7){
            a[i++] = numeroNatural;
        }
        numeroNatural++;
    }

    for(int i= 0; i< 100; i++) printf("%d ", a[i]);
    
    return 0;
}
