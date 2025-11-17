#include <stdio.h>

#define DIM 5

int main(){
    int num[DIM] = {10, -2, 13, 15, -4};

    for(int *p = num; p < num + DIM; p++){
        printf("Indirizzo: %d\n", p);
        printf("Valore: %d\n", *p);
        printf("Differenza tra puntatori: %d\n", p - num);

    }

    return 0;
}