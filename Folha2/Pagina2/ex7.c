#include <stdio.h>

/*
7. Construa um programa em C para verificar se um número inteiro positivo é capicua.
Um número é capicua se for o mesmo quando lido da esquerda para a direita e vice-
versa (por ex: 232 é capicua). Sugestão: construa o número rewerso e compare.
*/

void main()
{
    int num, numInic, rew=0; // rew=0 para que [0]rew=rew*10+(num%10) SEJA rew=(num%10) [pega no dígito]

    printf("Digite um número: ");
    scanf("%d", &num);
    numInic = num;
    do{
        rew=rew*10+(num%10); // Pega no algarismo da direita e "move-o" para a direita multiplicando por 10
        num=num/10;
    }while(num>0);

    (rew == numInic) ? printf("O número %d é uma capicua!", numInic) : printf("O número %d não é uma capicua!", numInic);
}