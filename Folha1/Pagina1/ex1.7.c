#include <stdio.h>

int main(){
    // Converter de Celsius para Fahreneit
    float c, f;

    printf("Digite o valor em graus Celsius: ");
    scanf("%f", &c);

    f = c*9 / 5 + 32;
    printf("%.2f graus Celsius = %.2f graus Fahreneit!\n\n", c, f);

    return 0;
}