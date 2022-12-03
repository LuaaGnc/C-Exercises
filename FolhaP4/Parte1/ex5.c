#include <stdio.h>

#define DIM 5

void LerVector (float[], int);
void SomaVectores (float[], float[], float[], int);


void main(){
    float soma[DIM], prim[DIM], sec[DIM];

    LerVector(prim, DIM);
    LerVector(sec, DIM);
    SomaVectores(soma, prim, sec, DIM);
}


void LerVector(float v[], int dim){
    printf("Digite os valores para o vetor de dimensão %d\n", dim);
    for(int _ = 0; _ < dim; _++)
        scanf("%f", &v[_]);
}


void SomaVectores (float soma[], float p[], float s[], int dim){
    for(int k = 0; k < dim; k++)
        soma[k] = p[k] + s[k];

    // Para verificar se foi mesmo efetuada a soma corretamente
    printf("[ ");
    for(int _ = 0; _ < dim; _++)
        printf("%f ", soma[_]); 
    printf("]\n\n\n");
}