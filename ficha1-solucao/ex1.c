#include<stdio.h>
int main(int argc, char const *argv[])
{
    int euros; 

    printf("Inserir valor em euros:");
    scanf("%d", &euros);
    int dolares = euros * 1.17;

    printf("O valor em dolares: %d", dolares);
    return 0;
}
