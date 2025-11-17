#include "chris.h"
#define DIM1 5
#define DIM2 8

int main(int arghc, const char * argv[]){
    int **a, i;

    a = (int **) malloc(DIM1 * sizeof(int *));

    for(i = 0; i < DIM1; i++){
        a[i] = (int *) malloc(DIM2 * sizeof(int));

    }

    for(i = 0; i < DIM1; i++){
        for(int j = 0; j < DIM2; j++)
        a[i][j] = i * j;
    
    }

    printf("Matrice %dx%d:\n", DIM1, DIM2);
    for(i = 0; i < DIM1; i++){
        for(int j = 0; j < DIM2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < DIM1; i++){
        free(a[i]);
    }

    free(a);
    return 0;
}