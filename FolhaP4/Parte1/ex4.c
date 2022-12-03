#include <stdio.h>

#define Dim 5

void LerVector (int[], int);
int PosicaoMaximoVector (int[], int);
int PosicaoMinimoVector (int[], int);

void main(){
    int v[Dim];

    LerVector(v, Dim);
    printf("O elemento máximo é %d e o mínimo é %d .\n\n\n", PosicaoMaximoVector(v, Dim), PosicaoMinimoVector(v, Dim));
}

void LerVector(int v[], int dim){
    printf("Digite os valores para o vetor de dimensão %d\n", dim);
    for(int _ = 0; _ < dim; _++)
        scanf("%d", &v[_]);
}


int PosicaoMaximoVector (int v[], int dim){
    int c = 0, maior, posmaior;
    
    for(int k = 0; k < dim; k++){
        if(c==0){
            maior = v[0];
            posmaior = 0;
            c=1;
        }
        if(v[k] > maior){
            maior = v[k];       // Aqui precisa de continuar com o *maior = v[k]* devido à condicional
            posmaior = k;
        }
    }
    return posmaior;
}


int PosicaoMinimoVector (int v[], int dim){
    int c = 0, menor, posmenor;
    
    for(int k = 0; k < dim; k++){
        if(c==0){
            menor = v[0];       // ou *v[k]* pois k é 0 nesta primeira instância. Mas convém ser v[0] para melhor entendimento
            posmenor = 0;       // ou *k* ^^^^^mesma razão^^^^^
            c=1;
        }
        if(v[k] < menor){
            menor = v[k];
            posmenor = k;
        }
    }
    return posmenor;
}