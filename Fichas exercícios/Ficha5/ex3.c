#include<stdio.h>

void decompor(int total_seg, int *horas, int *mins, int *segs);
int main(int argc, char const *argv[])
{
    int horas, mins, segs, total_seg = 5400;
    decompor(total_seg, &horas, &mins, &segs);

    printf("Os %d seg em horas: %.2d:%d:%.2d\n", total_seg, horas, mins, segs);
    return 0;
}

void decompor(int total_seg, int *horas, int *mins, int *segs){
    *horas = total_seg/3600;
    *mins = (total_seg%3600)/60;
    *segs = (total_seg%3600)%60;
}
