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
    void PosicaoMaximoMatriz (float [][NumColunas], int, int, int*, int*);
    void PosicaoMinimoMatriz (float [][NumColunas], int, int, int*, int*);

    int maxL, maxC, minL, minC;
    int *pl, *pc, *qc, *ql;

    pl = &maxL;
    pc = &maxC;
    
    ql = &minL; 
    qc = &minC;

    LerMatriz(v, NumLinhas, NumColunas);
    EscreverMatriz(v, NumLinhas, NumColunas);

    PosicaoMaximoMatriz(v, NumLinhas, NumColunas, pl, pc);
    PosicaoMinimoMatriz(v, NumLinhas, NumColunas, ql, qc);

    // Foi adicionado 1 pois começa do 0 as contagens nos arrays
    printf("\n\nA posição do maior elemento da matriz está na %dªlinha e na %dªcoluna; \n", maxL+1, maxC+1);
    printf("A posição do menor elemento da matriz está na %dªlinha e na %dªcoluna. \n\n", minL+1, minC+1);
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

void PosicaoMaximoMatriz (float v[][NumColunas], int nL, int nC, int *pl, int *pc){
    int z = 0;
    float maior;
    
    for(int l = 0; l < nL; l++){
        for(int c = 0; c < nC; c++){
            if(z==0){
                maior = v[0][0];
                *pl = l;
                *pc = c;
                z = 1;
            }
            if(v[l][c] > maior){
                maior = v[l][c];
                *pl = l;
                *pc = c;
            }
        }
    }
}


void PosicaoMinimoMatriz (float v[][NumColunas], int nL, int nC, int *ql, int *qc){
    int z = 0;
    float menor;
    
    for(int l = 0; l < nL; l++){
        for(int c = 0; c < nC; c++){
            if(z==0){
                menor = v[0][0];
                *ql = l;
                *qc = c;
                z = 1;
            }
            if(v[l][c] < menor){
                menor = v[l][c];
                *ql = l;
                *qc = c;
            }
        }
    }
}
