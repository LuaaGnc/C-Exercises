#include <stdio.h>
#include <math.h>

/*
4. Escreva um programa em C que possua o tipo PONTO3D para armazenar um ponto de
R3 e leia uma sequência de pontos, guardando-os num array de pontos. Para tal crie as
seguintes funções:
a) Escreva uma função para ler um ponto de R3 .
b) Escreva uma função para escrever um ponto de R3 .
c) Escreva uma função para determinar a distância entre dois pontos de R3 .
d) Escreva uma função para guardar o array de pontos de R3 num ficheiro de texto.
e) Escreva uma função para ler os pontos de R3 de um ficheiro de texto e guardá-los
num array
*/

typedef struct{
    double x;
    double y;
    double z;
} PONTO3D;

PONTO3D lerPonto();
void escreverPonto(PONTO3D);
double distancia(PONTO3D, PONTO3D);
int GuardaArray(PONTO3D *, int);
int LerArray(int);

int main(){
    int npontos;

    printf("Quantos pontos quer inserir?");
    scanf("%d", &npontos);

    PONTO3D a[npontos];

    for(int i = 0; i < npontos; i++){
        printf("Ponto %d : (x, y, z)\n", i);
        a[i] = lerPonto();
        escreverPonto(a[i]);
    }

    printf("\nSaving array . . .");
    GuardaArray(&a[0], npontos);
    printf("\nReading stored array . . .\n");
    LerArray(npontos);


    return 0;
}

// a)
PONTO3D lerPonto(){
    PONTO3D dot;
    scanf("%lf", &dot.x);
    scanf("%lf", &dot.y);
    scanf("%lf", &dot.z);
    return dot;
}

// b)
void escreverPonto(PONTO3D ponto){
    printf("\nO ponto lido foi (%lf, %lf, %lf).\n", ponto.x, ponto.y, ponto.z);
}

// c)
double distancia(PONTO3D A, PONTO3D B){
    return(sqrtf(powf(A.x - B.x, 2) + powf(A.y - B.y, 2) + powf(A.z - B.z, 2)));
}

// d)
int GuardaArray(PONTO3D *a, int npontos){
    FILE *ficheiro;

    ficheiro = fopen("pontos3d.txt", "w");
    if(ficheiro == NULL) {
        printf("O ficheiro nao pode ser aberto!");
        return 1;
    }

    for(int i = 0; i < npontos; i++)
        fprintf(ficheiro, "%lf %lf %lf\n", (a+i)->x, (a+i)->y, (a+i)->z);
    fclose(ficheiro);

    //end
    return 0;
}

// e)
int LerArray(int npontos) {
    FILE *ficheiro;
    PONTO3D p;

    ficheiro = fopen("pontos3d.txt", "r");
    if (ficheiro == NULL) {
        printf("O ficheiro nao pode ser aberto!");
        return 1;
    }

    for(int i = 0; i < npontos; i++){
        fscanf(ficheiro, "%lf %lf %lf", &p.x, &p.y, &p.z);
        escreverPonto(p);
    }

    //end
    return 0;
}