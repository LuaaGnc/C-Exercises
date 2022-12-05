#include <stdio.h>

int NumLinhas, NumColunas;

void LerMatriz (float [][NumColunas], int, int);
void ElemNulos (float [][NumColunas], int, int);
void LeituraPosElemNulos(int [], int );


void main(){

    printf("Insira o número de linhas: ");
    scanf("%d", &NumLinhas);
    printf("Insira o número de colunas: ");
    scanf("%d", &NumColunas);

    float v[NumLinhas][NumColunas];

    // Aproveito e complico o exercício
    // && --> imprimo as posições da matriz que têm elementos nulos
    

    LerMatriz(v, NumLinhas, NumColunas);
    ElemNulos(v, NumLinhas, NumColunas);
    
}


void LerMatriz(float v[][NumColunas], int nL, int nC){
    printf("Digite os números: \n");
    for(int l = 0; l < nL; l++)
        for(int c = 0; c < nC; c++)
            scanf("%f", &v[l][c]);
    printf("\n");
}


void ElemNulos (float v[][NumColunas], int nL, int nC){
    int ContaNulos=0;

    for(int l = 0; l < nL; l++)
        for(int c = 0; c < nC; c++)
            if(v[l][c] == 0){
                ContaNulos += 1;

                // Não necessário tho-
                printf("Encontrado um nulo em [%d][%d]\n", l, c);
            }

    printf("\n Logo, existe na matriz indicada %d valores nulos. \n\n", ContaNulos);
    if(ContaNulos == nL*nC)
        printf("A matriz indicada é também uma matriz nula (todos os elementos nulos).\n\n\n");
}
