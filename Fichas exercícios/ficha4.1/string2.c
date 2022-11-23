#include<stdio.h>
/*
 * Crie um programa que calcula o comprimento 
 * duma ‘string’ (não usar a strlen)
 */
unsigned tamanho(char[]);
int main(int argc, char const *argv[])
{
    char str[] = "Isto devia ser um teste";
    printf("%d\n", tamanho(str));
    return 0;
}

unsigned tamanho(char str[]){
    int i = 0;
    while (str[i++] != '\0');
    return i;
}

