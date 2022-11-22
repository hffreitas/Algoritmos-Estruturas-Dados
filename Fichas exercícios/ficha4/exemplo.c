#include <stdio.h>

int main(int argc, char const *argv[]){
    int i, j, *a, *b;
    i=3; j=5;
    a = &i;
    b = &j;
    i++;
    j= i+ *b;
    b = a;
    j = j + *b;
    printf("%d", j);
    return 0;
}
