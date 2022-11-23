#include<stdio.h>
#include<string.h>
// 4. Defina uma função void strnoV(char s[]) que retira todas as vogais de uma ‘string’
void strnoV(char[]);
int main(int argc, char const *argv[])
{
    char str[] = "Deve remover as vogais";
    strnoV(str);
    puts(str);
    return 0;
}
int isvowel(int ch);
void strnoV(char str []){
    int i = 0;
    while (i< strlen(str)){
        if(isvowel(str[i])){
            for (int j = i+1; j <= strlen(str); j++){
                str[j-1] = str[j];
            }
        } else{
            i++;
        }
    }
}

int isvowel(int ch){
    if (ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    if (ch == 'A' || ch =='E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    return 0;
}
