#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main(int argc, char const *argv[])
{
    char str[MAX_SIZE];
    printf("Inserir string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strlen(str) -1 ] = '\0';
    printf("A string inserida:\n");
    puts(str);
    return 0;
}
