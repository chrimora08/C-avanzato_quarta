#include "chris.h"

int main(){
    char s;
    int n;
    FILE *fp;
    
    fp = fopen("casa.txt", "r");

    if(fp == NULL)
        errore("", 42);

    return 0;
}