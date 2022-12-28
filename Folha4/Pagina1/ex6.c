#include <stdio.h>


#define Dim 5


void LerVector (float[], int);
float MediaElementosVector (float[], int);


void main(){
    float v[Dim];
    LerVector(v, Dim);

    printf("A média dos elementos do vetor é %f\n\n", MediaElementosVector(v, Dim));
}

void LerVector(float v[], int dim){

    printf("Digite os valores para o vetor de dimensão %d\n", dim);
    for(int _ = 0; _ < dim; _++)
        scanf("%f", &v[_]);
}

float MediaElementosVector (float v[], int dim){
    float soma=0;

    for(int k=0; k < dim; k++)
        soma+=v[k];
    
    return (soma/dim);
}
