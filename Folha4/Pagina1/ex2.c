#include <stdio.h>

#define Dim 10

void LerVector (int[], int);
int SomaElementosVector (int*, int);

void main(){
    int v[Dim];

    LerVector(v, Dim);
}

void LerVector(int v[], int dim){
    for(int _ = 0; _ < dim; _++)
        scanf("%d", &v[_]);

    int *p;
    p = &v[0];

    printf("A soma dos elementos do vetor é %d\n\n", SomaElementosVector(p,Dim));
}

int SomaElementosVector(int *p, int dim){
    int soma = 0;
    for(int _ = 0; _ < dim; _++)
        soma+= p[_];
        
    return soma;
}
