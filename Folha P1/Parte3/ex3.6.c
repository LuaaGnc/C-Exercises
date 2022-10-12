#include <stdio.h>
/*
6. Construa um algoritmo para determinar o maior e o menor número de uma
sequência (com pelo menos 1 elemento) de números inteiros dados pelo utilizador.
A introdução de números deverá terminar quando for inserido o valor zero. 
*/
void main() {
    int valEntradaMaior=0, valEntradaMenor=0, answer=-1;    // answer=-1 --> start ao comando while
    int comp, maior, menor;

    printf("Digite vários números. Para terminar digite 0\n");
    
    while(answer != 0){
        scanf("%d", &comp);
        answer = comp;

        // Maior
        if (comp > valEntradaMaior) {maior = comp; valEntradaMaior=comp;}
        // Menor
        if (comp < valEntradaMenor) {menor = comp; valEntradaMenor=comp;}
    }

    printf("O maior valor da sequência é %d.\n"
    "O menor valor da sequência é %d.\n\n", maior, menor);
}