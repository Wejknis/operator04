#include <stdio.h>

int main(){
    int a = 6;
    int b = 4;
    int max;
    int min;

    max = a > b ? a : b;

    printf("maksimum: %i\n", max);

    min = a < b ? a : b;

    printf("minimum: %i\n", min);

    return 0;
}