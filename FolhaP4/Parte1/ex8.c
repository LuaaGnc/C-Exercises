#include <stdio.h>


int NumLinhas, NumColunas;

void main(){

    printf("Insira o número de linhas: ");
    scanf("%d", &NumLinhas);
    printf("Insira o número de colunas: ");
    scanf("%d", &NumColunas);

    //Protótipos de Função
    void LerMatriz (float [][NumColunas], int, int);
    void EscreverMatriz (float [][NumColunas], int, int);
    float SomaElementosMatriz (float [][NumColunas], int, int);

    float v[NumLinhas][NumColunas];

    LerMatriz(v, NumLinhas, NumColunas);
    EscreverMatriz(v, NumLinhas, NumColunas);

    printf("\nA soma dos elementos da Matriz"
     " é %f\n\n", SomaElementosMatriz (v, NumLinhas, NumColunas));


    printf("\n\n");
}

void LerMatriz (float v[][NumColunas], int nL, int nC){
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

float SomaElementosMatriz(float v[][NumColunas], int nL, int nC){
    float soma=0;

    for(int l = 0; l < nL; l++)
        for(int c = 0; c < nC; c++)
            soma += v[l][c];

    return soma;
}