#include <stdio.h>


int NumLinhas, NumColunas;


void main(){
    void LerMatriz(int [][NumColunas], int, int);    
    /* void EscreverMatriz(int [][NumColunas], int, int); */
    int DetectMaxLine(int [][NumColunas], int, int);

    printf("Insira o número de linhas: ");
    scanf("%d", &NumLinhas);
    printf("Insira o número de colunas: ");
    scanf("%d", &NumColunas);

    int v[NumLinhas][NumColunas];

    LerMatriz(v, NumLinhas, NumColunas);
    printf("A linha com a maior soma é %d\n\n", DetectMaxLine(v, NumLinhas, NumColunas)+1);
}


void LerMatriz(int v[][NumColunas], int nL, int nC){
    printf("Digite os números: \n");
    for(int l = 0; l < nL; l++)
        for(int c = 0; c < nC; c++)
            scanf("%d", &v[l][c]);
}


int DetectMaxLine(int v[][NumColunas], int nl, int nc){
    int maior_L, maiorComp, soma=0, c=0;
    
    for(int i = 0; i < nl; i++){
        soma = 0;
        for(int j = 0; j < nc; j++){
            soma += v[i][j];
            if(c=0){
                maiorComp = soma;
                c=1;
            }
            if (soma > maiorComp){
                maiorComp = soma;
                maior_L = i;
            }
        }
    }
    return maior_L;
}


/* void EscreverMatriz(int v[][NumColunas], int nL, int nC){
    printf("\n\n");
    for(int l = 0; l < nL; l++){
        printf("|");
        for(int c = 0; c < nC; c++)
            printf("%d ", v[l][c]);
        printf("|\n");
    }
} */