#include<stdio.h>

void swap(int x, int y);
void swapM(int* x, int* y);

int main(int argc, char const *argv[]){
    int x =5, y= 6;
    printf("x:%d, y:%d\n",x,y);
    swapM(&x,&y);
    printf("x:%d, y:%d\n",x,y);
    return 0;
}
void swapM(int *x, int *y){
    int z = *x;
    *x = *y;
    *y= z;
}
void swap(int x, int y){
    int z = x;
    x = y;
    y= z;
}
