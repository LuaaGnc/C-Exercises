#include <stdio.h>
/* 8. Construa um algoritmo para calcular o fatorial de um número inteiro positivo. (Nota:
caso seja introduzido um número negativo, este deverá ser rejeitado e introduzido
um outro número; este procedimento deverá ser repetido até ser introduzido um
número positivo).*/

void main() {
    int num, fat=1;

    printf("Digite um número para calcular o seu fatorial: ");
    scanf("%d", &num);    

    while (num <= 0) {
        printf("Digite novamente o número: ");
        scanf("%d", &num); 
    }

    for(int i = num; i > 1; i--) {
        fat *= i; // Quando i for 1 STOP (1 * x = x) 
    }
    printf("O fatorial de %d é %d\n\n", num, fat);
}