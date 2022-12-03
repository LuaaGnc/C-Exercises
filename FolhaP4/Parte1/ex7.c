#include <stdio.h>


void LerMatriz (float[][], int, int);
void EscreverMatriz (float[][], int, int);

void main(){
    const NumLinhas, NumColunas;

    printf("Insira o número de linhas: ");
    scanf("%d", &NumLinhas);
    printf("Insira o número de colunas: ");
    scanf("%d", &NumLinhas);

    float v[NumLinhas][NumColunas];

    LerMatriz(v, NumLinhas, NumColunas);

}


void LerMatriz (float v[][], int nL, int nC){
    for(int c = 0; c < nC; c++)
        for(int l = 0; l < nL; l++)
            scanf("%f", &v[l][c]);
}
/* void EscreverMatriz (float[][], int, int); */