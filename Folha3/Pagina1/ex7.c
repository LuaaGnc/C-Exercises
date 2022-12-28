#include <stdio.h>


void escreveCaracter(char, int);


void main(){
    int B, L, A;

    printf("Digite o número de asteriscos da base: ");
    scanf("%d", &B);

    while (B%2 != 0 && B < 3){
        printf("[ERRO]: Digite o número de asteriscos novamente: ");
        scanf("%d", &B);
    }

    printf("Digite a largura do tronco: ");
    scanf("%d", &L);
    
    while (L < 1 && L%2 != 0 && L <= B/2){
        printf("[ERRO]: Digite a largura do tronco: ");
        scanf("%d", &L);
    }


    printf("Digite a altura do tronco: ");
    scanf("%d", &A);

    while (A >= 2 && A <= B/2){
        printf("[ERRO]: Digite a altura do tronco: ");
        scanf("%d", &A);
    }
}