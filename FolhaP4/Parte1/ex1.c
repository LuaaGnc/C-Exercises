#include <stdio.h>

#define Dim 10

void LerVector (float[], int);
void EscreverVector (float[], int);

void main(){
    float A[Dim];
    LerVector(A, Dim);
}

void LerVector(float A[], int dim){
    for(int _ = 0; _ < dim; _++)
        scanf("%f", &A[_]);

    EscreverVector(A, dim);
}

void EscreverVector(float A[], int dim){
    for(int _ = 0; _ < dim; _++)
        printf("%f ", A[_]);
}