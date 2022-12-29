#include <stdio.h>
#include <math.h>


typedef struct{
    float x;
    float y;
    float z;
} PONTO3D;

PONTO3D lerPonto();
void escreverPonto(PONTO3D);
float distancia(PONTO3D, PONTO3D);

int main(){
    PONTO3D pontoA, pontoB;

    pontoA = lerPonto();
    pontoB = lerPonto();

    escreverPonto(pontoA);
    escreverPonto(pontoB);
    printf("A distancia entre os dois pontos acima lidos é %f", distancia(pontoA, pontoB));
    return 0;
}

PONTO3D lerPonto(){
    PONTO3D dot;
    scanf("%f", &dot.x);
    scanf("%f", &dot.y);
    scanf("%f", &dot.z);
    return dot;
}

void escreverPonto(PONTO3D ponto){
    printf("O ponto lido foi (%f, %f, %f).\n", ponto.x, ponto.y, ponto.z);
}


float distancia(PONTO3D A, PONTO3D B){
    return(sqrtf(powf(A.x - B.x, 2) + powf(A.y - B.y, 2) + powf(A.z - B.z, 2)));
}