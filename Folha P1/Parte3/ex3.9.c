#include <stdio.h>
/*
Construa um algoritmo para calcular o valor da seguinte expressão, com N > 0
introduzido pelo utilizador   sum{k = 1}{N:N>0}{1/k}
*/
void main() {
    float n;
    double k, soma=0;

    printf("Digite um valor para N(limite superior): ");
    scanf("%f", &n);
    while((int)n <= 0){
        printf("Note que -->   N>0   <--\nDigite um valor para N(limite superior): ");
        scanf("%f", &n);
    }
    printf("Digite um valor para K: ");
    scanf("%lf", &k);

    for(int i = n; i > 0; i--) {
        soma += 1/(double)k;
    }

    printf("A soma de 1/%.3lf repetida %.0f vezes é igual a %.5lf\n\n", k, n, soma);
}