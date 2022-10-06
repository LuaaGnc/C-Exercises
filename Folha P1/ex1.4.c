#include <stdio.h>

int main() {
    double preco, precoFinal;
    int iva;

    printf("Digite o preço do seu produto: ");
    scanf("%lf", &preco);
    printf("\nDigite a taxa de IVA: ");
    scanf("%d", &iva);

    precoFinal = preco*(1 + iva/100);
    
    printf("O preco final é %.2lf\n\n", precoFinal);
}