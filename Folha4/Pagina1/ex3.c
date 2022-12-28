#include <stdio.h>

#define Dim 5

void LerVector (int[], int);
int MaximoElementoVector (int[], int);
int MinimoElementoVector (int[], int);

void main(){
    int v[Dim];

    LerVector(v, Dim);
    printf("O elemento máximo é %d e o mínimo é %d .\n\n\n", MaximoElementoVector(v, Dim), MinimoElementoVector(v, Dim));
}

void LerVector(int v[], int dim){
    printf("Digite os valores para o vetor de dimensão %d\n", dim);
    for(int _ = 0; _ < dim; _++)
        scanf("%d", &v[_]);
}


int MaximoElementoVector (int v[], int dim){
    int c = 0, maior;
    
    for(int k = 0; k < dim; k++){
        if(c==0){
            maior = v[0];
            c=1;
        }
        if(v[k] > maior)
            maior = v[k];
    }
    return maior;
}


int MinimoElementoVector (int v[], int dim){
    int c = 0, menor;
    
    for(int k = 0; k < dim; k++){
        if(c==0){
            menor = v[0];
            c=1;
        }
        if(v[k] < menor)
            menor = v[k];
    }
    return menor;
}