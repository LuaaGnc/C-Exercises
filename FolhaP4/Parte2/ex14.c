#include <stdio.h>


int NumLinhas, NumColunas;


void main(){
    void LerMatriz(int [][NumColunas], int, int);    
    void EscreverMatriz(int [][NumColunas], int, int);
    void TransposeMatrix(int [][NumColunas], int, int);

    printf("Insira o número de linhas: ");
    scanf("%d", &NumLinhas);
    printf("Insira o número de colunas: ");
    scanf("%d", &NumColunas);

    int v[NumLinhas][NumColunas];

    LerMatriz(v, NumLinhas, NumColunas);

    printf("A matriz inserida foi:");
    EscreverMatriz(v, NumLinhas, NumColunas);
    TransposeMatrix(v, NumLinhas, NumColunas);
}


void LerMatriz(int v[][NumColunas], int nL, int nC){
    printf("Digite os números: \n");
    for(int l = 0; l < nL; l++)
        for(int c = 0; c < nC; c++)
            scanf("%d", &v[l][c]);
}


void EscreverMatriz(int v[][NumColunas], int nL, int nC){
    printf("\n\n");
    for(int l = 0; l < nL; l++){
        printf("|");
        for(int c = 0; c < nC; c++)
            printf("%d ", v[l][c]);
        printf("|\n");
    }
}


void TransposeMatrix(int v[][NumColunas], int nL, int nC){
    int trans[nC][nL];

    for(int l = 0; l < nL; l++)
        for(int c = 0; c < nC; c++)
            trans[c][l] = v[l][c];

    printf("\n\nA matriz transposta é:");
    NumColunas = nL;
    EscreverMatriz(trans, nC, nL);
    printf("\n\n");
}