#include<stdio.h>

void quadrado(int);
void trianguloVertical(int);
void triangulo(int);
void triangulo2(int);
void quadrado2(int);
int main(int argc, char const *argv[]){
    int n;
    printf("Introduza o tamanho:");
    scanf("%d", &n);
    triangulo2(n);
    return 0;
}
void quadrado2(int n){
    for(int i = 0; i<n; i++){
        for( int j = 0;j<n; j++){
            if ((i+j)%2 == 0) putchar('#');
            else putchar('_');
        }
        putchar('\n');
    }
} 

void quadrado(int n){
    for(int i = 0; i<n; i++){
        for( int j = 0;j<n; j++){
            putchar('#');
        }
        putchar('\n');
    }
}


void trianguloVertical(int n){
    for( int i = 0; i< n; i++){
        for(int j = 0; j< n-1-i; j++)
            putchar(' ');
        for (int k = 0; k < (2*i)+1; k++)
            putchar('#');
        putchar('\n');
   }
}

void triangulo(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            putchar('#');
        }
        putchar('\n');
    }
    for (int i = n-1; i > 0; i--){
        for (int j = 0; j < i; j++){
            putchar('#');
        }
        putchar('\n');
    }
}

void triangulo2(int n){
    int j;
    for (int i = 0; i < n; i++){
        for( j= 0; j< n-i-1; j++){
            putchar(' ');
        }
        for (int k = 0; k < n+i-j; k++){
            putchar('#');
        }
        putchar('\n');
    }
}