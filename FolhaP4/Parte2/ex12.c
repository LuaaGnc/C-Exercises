#include <stdio.h>

/*
Nota que:
Se A é uma matriz m×n e B é uma matriz n×p
Então seu produto é uma matriz m×p
*/

/* Por isso, será necessário saber:
Colunas da Matriz A;
Linhas da Matriz B;
*/


int NumLinhas, NumColunas, NumColunasAG, NumColunasBG;


void main(){
    void LerMatriz(int [][NumColunas], int , int);
    void EscreverMatriz(int [][NumColunas], int , int);
    void ProdutoMatriz(int [][NumColunasAG], int[][NumColunasBG], int, int, int, int);


    int NumLinhasA,NumColunasA, NumLinhasB, NumColunasB;
    int A[NumLinhasA][NumColunasA], B[NumLinhasB][NumColunasB];

    do{
    printf("Insira o número de linhas da Matriz A: ");
    scanf("%d", &NumLinhasA);
    printf("Insira o número de colunas A: ");
    scanf("%d", &NumColunasA);

    printf("Insira o número de linhas da Matriz B: ");
    scanf("%d", &NumLinhasB);
    printf("Insira o número de colunas B: ");
    scanf("%d", &NumColunasB);
    }while(NumColunasA != NumLinhasB);

    NumColunas = NumColunasA;       // Para as funções se adaptarem
    LerMatriz(A, NumLinhasA, NumColunasA); 

    NumColunas = NumColunasB;
    LerMatriz(B, NumLinhasB, NumColunasB);

    NumColunasAG = NumColunasA;
    NumColunasBG = NumColunasB;

    ProdutoMatriz(A, B, NumLinhasA, NumColunasA, NumLinhasB, NumColunasB);
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


/*
Nota que:
Se A é uma matriz  m×n  e B é uma matriz  n×p 
Então seu produto é uma matriz m×p
*/

/*
Pega na linha
Multiplica pela coluna
Adicionando cada membro
*/
void ProdutoMatriz(int a[][NumColunasAG], int b[][NumColunasBG], int nla, int nca, int nlb, int ncb){
    int v[nla][ncb], z = 0;

    for(int l = 0; l < nla; l++)
        for(int c = 0; c < ncb; c++)
            v[l][c] = 0;

    // Ciclo que percorre aqueles valores 0... 1... 2... Pode ser a variável nca ou nlb, tanto faz pois elas
    // NECESSITAM DE SER IGUAIS
        // Ciclo que atravessa as linhas

    EscreverMatriz(a, nla, nca);
    EscreverMatriz(b, nlb, ncb);


    printf("\n\n\n");
    for(int _ = 0; _ <= nca; _++)
        for(int i = 0; i < nla; i++){
            for(int k = 0; k < nca; k++){
                /* printf("v[%d][%d] += a[%d][%d]*b[%d][%d] \n", _, i, _, k, k, i);
                printf("%d += %d * %d \n", v[_][i], a[_][k], b[k][i]); */
                v[_][i] += a[_][k] * b[k][i];
            }
        }
        
    EscreverMatriz(v, nla, ncb);
}