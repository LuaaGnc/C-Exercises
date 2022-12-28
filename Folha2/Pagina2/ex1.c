#include <stdio.h>

void main() {
    char resp;
    float raio, perim, area;
    const float PI = 3.15169;

    do
    {
        printf("Digite o raio R: ");
        scanf("%f", &raio);

        perim = 2*PI*raio;
        area = PI*raio*raio;

        printf("O perímetro é %.2f m e a área é %.2f m²  para %.2f m de raio.\n", perim, area, raio);

        printf("Deseja continuar? [S/N]");
        scanf(" %c", &resp); // Para não considerar o ENTER
    } while (resp == 'S' || resp == 's');

    printf("\n\n....Fechando o programa....");
}
