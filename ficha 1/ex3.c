#include<stdio.h>

float imc(){
    float peso, altura, imc;
    scanf("%f", &peso);
    scanf("%f", &altura);
    imc = peso/(altura*altura);
    printf("O IMC é %f", imc);
}


int main(int argc, char const *argv[])
{
    imc();
    return 0;
}
