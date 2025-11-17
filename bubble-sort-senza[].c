#include <stdio.h>

int main(){
    int numeri[5] = {5, 4, 6, 3, 9};

    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(*(numeri + j) > *(numeri + j + 1)){
                int temp = *(numeri + j);
                *(numeri + j) = *(numeri + j + 1);
                *(numeri + j + 1) = temp;

            }
        }
    }

    for(int k = 0; k < 5; k++){
        printf("%d ", *(numeri + k));

    }

}