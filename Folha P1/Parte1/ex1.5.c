#include <stdio.h>

int main() { 
    int nota1, nota2;
    float media;

    printf("Introduza as notas como valor inteiro: ");
    scanf("%d%d", &nota1, &nota2);

    media = ((float)nota1 + (float)nota2)/2;
    printf("\nA media entre %d e %d das duas notas é %.2f\n", nota1, nota2, media);
    return 0;
}