#include <stdio.h>

/*
6. Escreva um programa em C que apresente num ecrã uma pirâmide de números como a
que se segue. Para isso deverá pedir ao utilizador o valor de N que deverá ser
obrigatoriamente maior ou igual 2. A pirâmide apresentada é o exemplo para N = 5.
                1                       [numero de Espaços]1 = n - 1   {numero de Elementos} = 1
            1   2   1                   [numero de Espaços]2 = n - 2   {numero de Elementos} += 2
        1   2   3   2   1
    1   2   3   4   3   2   1
1   2   3   4   5   4   3   2   1 

For_tab(contagem de N-1(tabs) a 0 tabs(_ > ))
For_dígitos(crescente até nLinha, descendente pós nLinha)

PS: Nota que tab = 4 espaços, mas na console não é verdade.
Por isso, no Gerador de Espaços está "    " na instrução[printf]
*/
void main(){
    int answer=5, stop=1, valStartDec, TabNCount; 
    
    do{
        printf("Digite um número >= a 2: ");
        scanf("%d", &answer);
    }while(answer < 2);
    printf("\n");

    TabNCount = answer-1;
    while(stop != answer+1){
        // Gerador de Espaços
        for (int TabN = TabNCount; TabN >= 0; TabN--){
            printf("    ");
        }

        // Gerador de Dígitos - Crescente
        for(int j=1; j <= stop; j++){
            printf("%d   ", j);
            valStartDec = j;
            }

        // Gerador de Dígitos - Decrescente
        for(int k=valStartDec-1; k >= 1; --k){
            printf("%d   ", k);
        }
        printf("\n");

        stop++;
        TabNCount--;
    }
    printf("\n\n\n");
}