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
void nearestPoints(PONTO3D *, PONTO3D *, PONTO3D *);
void farthestPoints(PONTO3D *, PONTO3D *, PONTO3D *);

int main(){
    PONTO3D pontoA;
    int npontos=0;

    PONTO3D pontos[5], pM, qM, pm, qm;
    PONTO3D *vp, *p1, *q1, *p2, *q2;
    vp = &pontos[0];
    p1 = &pM;
    q1 = &qM;
    p2 = &pm;
    q2 = &qm;

    while(npontos != 5) {
        printf("Escreva o %d ponto ->  x, y, z :\n", npontos);
        pontoA = lerPonto();
        escreverPonto(pontoA);
        pontos[npontos] = pontoA;
        npontos++;
    }
    nearestPoints(vp, p2, q2);
    farthestPoints(vp, p1, q1);

    printf("\nOs pontos mais proximos da origem do referencial sao (%f, %f, %f) e (%f, %f, %f)\n\n",
           (*p2).x, (*p2).y, (*p2).z, (*q2).x, (*q2).y, (*q2).z);

    printf("\nOs pontos mais longe da origem do referencial sao (%f, %f, %f) e (%f, %f, %f)\n\n",
           (*p1).x, (*p1).y, (*p1).z, (*q1).x, (*q1).y, (*q1).z);

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

void nearestPoints(PONTO3D *vp, PONTO3D *p, PONTO3D *q){
    PONTO3D REF;
    float menor = 0;
    int flag;
    REF.x = 0; REF.y = 0; REF.z = 0;

    for (int i = 0; i < 5; i++) {
        if (menor > distancia((*(vp + i)), REF)) {
            menor = distancia((*(vp + i)), REF);
            p->x = (vp+i)->x;
            p->y = (vp+i)->y;
            p->z = (vp+i)->z;
            flag = i;
        }
    }

    for (int k = 0; k < flag; k++) {
        if (menor > distancia((*(vp + k)), REF)) {
            menor = distancia((*(vp + k)), REF);
            q->x = (vp+k)->x;
            q->y = (vp+k)->y;
            q->z = (vp+k)->z;
        }
    }
    for (int k1 = 5; k1 > flag; k1--) {
        if (menor > distancia((*(vp + k1)), REF)) {
            menor = distancia((*(vp + k1)), REF);
            q->x = (vp+k1)->x;
            q->y = (vp+k1)->y;
            q->z = (vp+k1)->z;
        }
    }
}
void farthestPoints(PONTO3D *vp, PONTO3D *p, PONTO3D *q){
    PONTO3D REF;
    float maior = 0;
    int flag;

    REF.x = 0; REF.y = 0; REF.z = 0;

    for (int i = 0; i < 5; i++) {
        if (maior < distancia((*(vp + i)), REF)) {
            maior = distancia((*(vp + i)), REF);
            p->x = (vp+i)->x;
            p->y = (vp+i)->y;
            p->z = (vp+i)->z;
            flag = i;
        }
    }


    for (int k = 0; k < flag; k++) {
        if (maior < distancia((*(vp + k)), REF)) {
            maior = distancia((*(vp + k)), REF);
            q->x = (vp+k)->x;
            q->y = (vp+k)->y;
            q->z = (vp+k)->z;
        }
    }
    for (int k1 = 5; k1 > flag; k1--) {
        if (maior < distancia((*(vp + k1)), REF)) {
            maior = distancia((*(vp + k1)), REF);
            q->x = (vp+k1)->x;
            q->y = (vp+k1)->y;
            q->z = (vp+k1)->z;
        }
    }
}