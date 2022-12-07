#include <stdio.h>


void ReadMatrix();
void WriteMatrix();
void ProductMatrix();



void main(){
    int nLinhasA, nColunasA;
    int nLinhasB, nColunasB;
    int *nLA, *nCA;
    int *nLB, *nCB;

    nLA = &nLinhasA;
    nCA = &nColunasA;
    nLB = &nLinhasB;
    nCB = &nColunasB;

    printf("Insira a dimensão de A:\n");
    printf("nº de Linhas = "); scanf("%d", nLA);
    printf("nº de Colunas = "); scanf("%d", nCA);
    
    printf("Insira a dimensão de B:\n");
    printf("nº de Linhas = "); scanf("%d", nLB);
    printf("nº de Colunas = "); scanf("%d", nCB);

    // Duas matrizes;
    int A[*nLA][*nCA], B[*nLB][*nCB];


}


void ReadMatrix(int *v, int *nl, int *nc){
    *v = *nl + *nc;
    for(int i = 0; i < *nl; i++)
        for(int j = 0; j < *nc; j++)
            scanf("%d", &v[i]);
}


void WriteMatrix(){

}


void ProductMatrix(){

}