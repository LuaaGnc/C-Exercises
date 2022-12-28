#include <stdio.h>

int NumLinhas, NumColunas;

void main(){

    printf("Insira o número de linhas: ");
    scanf("%d", &NumLinhas);
    printf("Insira o número de colunas: ");
    scanf("%d", &NumColunas);

    float v[NumLinhas][NumColunas];

    void LerMatriz (float [][NumColunas], int, int);
    void EscreverMatriz (float [][NumColunas], int, int);
    float MaximoElementoMatriz (float [][NumColunas], int, int);
    float MinimoElementoMatriz (float [][NumColunas], int, int);

    LerMatriz(v, NumLinhas, NumLinhas);
    EscreverMatriz(v, NumLinhas, NumLinhas);
    printf("\n -Da matriz é:\n ->> %f    o maior elemento\n ->> %f   o menor elemento \n\n",
     MaximoElementoMatriz(v, NumLinhas, NumLinhas), MinimoElementoMatriz(v, NumLinhas, NumLinhas));
}


void LerMatriz(float v[][NumColunas], int nL, int nC){
    printf("Digite os números: \n");
    for(int l = 0; l < nL; l++)
        for(int c = 0; c < nC; c++)
            scanf("%f", &v[l][c]);
}

void EscreverMatriz(float v[][NumColunas], int nL, int nC){
    printf("\n\n");
    for(int l = 0; l < nL; l++){
        printf("|");
        for(int c = 0; c < nC; c++)
            printf("%f ", v[l][c]);
        printf("|\n");
    }
}


float MaximoElementoMatriz(float v[][NumColunas], int nL, int nC){
    int z = 0;
    float maior;
    
    for(int l = 0; l < nL; l++){
        for(int c = 0; c < nC; c++){
            if(z==0){
                maior = v[0][0];
                z=1;
            }
            if(v[l][c] > maior)
                maior = v[l][c];
        }
    }
    return maior;
}


float MinimoElementoMatriz(float v[][NumColunas], int nL, int nC){
    int z = 0;
    float menor;
    
    for(int l = 0; l < nL; l++){
        for(int c = 0; c < nC; c++){
            if(z==0){
                menor = v[0][0];
                z=1;
            }
            if(v[l][c] < menor)
                menor = v[l][c];
        }
    }
    return menor;
}