#include <stdio.h>

/*
1. Escreva um programa em C que leia uma string a partir do teclado e escreva a string
lida no ecrã.
*/

void main(){
    char nome[100];
    printf("Insira seu nome: ");
    gets(nome);
    printf("O seu nome é %s.\n\n", nome);
}