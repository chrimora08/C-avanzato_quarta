#include <stdio.h>

#define DIM 5

int main(){
    int num[DIM] = {10, -2, 13, 15, -4};
    int *p = num;

    while(p < num + DIM){
        printf("Indirizzo: %p\n", p);
        printf("Valore: %d\n", *p);
        printf("Differenza tra puntatori: %d\n", p - num);

        p++;
    }

    return 0;
}