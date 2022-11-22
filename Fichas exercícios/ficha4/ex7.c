#include<stdio.h>
void pascal(int[], int);

int main(int argc, char const *argv[])
{
    int array[100];
    int n = 4;

    pascal(array, n);
    for (int i = 0; i < n; i++) printf("%d ", array[i]);
    return 0;
}

void pascal(int a[], int n){
    for (int i = 0; i < n; i++) a[i] = 0;
    a[n-1] = 1;
    int aux = a[n-1];
    for (int i = n-1; i >0; i--)
    {
        a[i] = a[i] + aux;
        aux += a[i];
    }
    
    
}
