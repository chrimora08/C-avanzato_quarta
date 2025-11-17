#include <stdio.h>
#define FILESOURCES "copia-del-sorgente.c"
#define FILE_OUT "copia.c"

int main(int arghc, const char * argv) {
    FILE *f1, *f2;
    char c;

    f1 = fopen(FILESOURCES, "r");
    f2 = fopen(FILE_OUT, "w");

    if(f1 == NULL){
        printf("Il file non esiste");

    }

    while ((c = fgetc(f1)) != EOF) {
        fputc(c, f2);

    }

    printf("%d", arghc);

    fclose(f1);
    fclose(f2);

    return 0;
}
