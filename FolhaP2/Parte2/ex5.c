#include <stdio.h>
/*
5. Escreva um programa em C que apresente no ecrã um quadrado de números como o
que se segue. Para isso deverá pedir ao utilizador o valor de N que deverá ser
obrigatoriamente maior ou igual 2. O quadrado apresentado é o exemplo para N = 5.
.................
1   2   3   4   5       n[1, 5] --> [1, n]
2   3   4   5   6       n[1+1,5++]
3   4   5   6   7       .
4   5   6   7   8       ..
5   6   7   8   9       ...
.................
*/
void main(){
    int n, stopValue=1, nInit=1;
    
    do
    {
        printf("Digite um número inteiro maior ou igual a 2: ");
        scanf("%d", &n);
    } while (n < 2);

    // stopValue != n+1 (Para não parar logo que chegue no 5). Condição: Se verificar-se,, passa para as instruções abaixo
    while (stopValue != n+1){
        for(int i=1; i <= n; i++){
            printf("%d\t", nInit);
            nInit++;
        }
        printf("\n");
        stopValue++;
        nInit = stopValue; // Para voltar a contar. stopValue conta também o numero da linha,, nColuna = nLinha + 1
    }
}