#include "chris.h"

int main(){
    int vet[5];
    int *pi;
    pi = vet;

    printf("%p  %p\n", vet + 20, pi);
    printf("%d", *(vet + 20));

    return 0;
}
