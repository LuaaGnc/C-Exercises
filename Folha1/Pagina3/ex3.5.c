#include <stdio.h>
/*
Tenho de andar de cada dígito
153%10 = 3
28332%10 = 2
218219%10 = 9    Ou seja, está a pegar no último dígito sempre. 
*/
void main(){
    int valor, soma=0, alg;

    printf("Introduza um valor inteiro: ");
    scanf("%d", &valor);

    while(valor > 0) {
        // Pega o dígito mais à esquerda
        alg = valor%10;
        // Soma o dígito na variável soma
        soma += alg;

        // Como isto são todos valores inteiros,
        // Arredondamento SEMPRE tipo FLOOR (para baixo)
        valor = valor/10;
    }
    printf("A soma dos dígitos é: %d\n\n", soma);

}