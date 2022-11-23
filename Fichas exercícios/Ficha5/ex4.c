#include<stdio.h>

void max_min(int vec[], int size, int *pmax, int *pmin);

int main(int argc, char const *argv[])
{
    int vec[] = {2,5,7,8,4,9,4,2,5};
    int max, min;
    max_min(vec, 9, &max, &min);

    printf("Max: %d; Min: %d\n", max, min);

    return 0;
}

void max_min(int vec[], int size, int *pmax, int *pmin){
    for (int i = 0; i < size; i++){
        if(i == 0 || vec[i] > *pmax ) *pmax = vec[i];
        if(i == 0 || vec[i] < *pmin ) *pmin = vec[i];
    }   
}
