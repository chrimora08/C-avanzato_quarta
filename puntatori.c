#include "chris.h"

void areaPerimetroQuad(float l, float *area, float *perimetro){
    *perimetro = l * 4;
    *area = l * l;

}

int main(){
    float l, a, p;

    l = chiediN(l);

    areaPerimetroQuad(l, &a, &p);

    printf("L'area vale: %.2f || Il perimetro vale: %.2f", a, p);

    return 0;
}
