#include<stdio.h>

void swap(int [], int, int);
int main(int argc, char const *argv[])
{
    int a[] = {4,1,7,8,3,6};
    for (int i = 0; i < 6; i++) printf("%d", a[i]);
    printf("\n");
    swap(a, 2,3);
    for (int i = 0; i < 6; i++) printf("%d", a[i]);
    return 0;
    printf("\n");
}

void swap(int *a, int i, int j){
    int z = a[i];
    a[i] = a[j];
    a[j] = z;
}
