#include<stdio.h>
typedef enum eTest{
    EURO = 'E',
    DOLAR = 'D'
} Moeda;

int main(int argc, char const *argv[])
{
    Moeda m = EURO;
    printf("%u\n", m);
    return 0;
}
