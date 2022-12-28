#include <stdio.h>
#include <math.h>

float perimetroCirculo(float);
float areaCirculo(float);

void main(){
    float raio;
    char answer;

    do{
        printf("\nDigite o raio: ");
        scanf("%f", &raio);

        printf("Perímetro = %f  e a Área = %f\n", perimetroCirculo(raio), areaCirculo(raio));

        printf("\nPretende continuar? [S]Sim [N]Não: ");
        scanf(" %c", &answer);
    } while (answer=='S' || answer=='s');
}


float perimetroCirculo(float raio){return 2*M_PI*raio;}
float areaCirculo(float raio){return M_PI*pow(raio, 2);}