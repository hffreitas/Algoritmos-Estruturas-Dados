
#define NR_MINI_TESTES 6

typedef enum eMetodo{
    METODO_A = 'A',
    METODO_B = 'B'
} Metodo;

typedef struct sMetodoA{
    int mini_testes[NR_MINI_TESTES];
    int teste;
    int exame;
} MetodoA;

typedef struct sMetodoB{
    int teste;
    int exame;
} MetodoB;

typedef struct sAvaliacao{
    MetodoA metA;
    MetodoB metB;
}Avaliacao;


MetodoA criarMetodoA();

MetodoB criarMetodoB();