#include <stdio.h>

/*
2. Escreva um programa em C que leia uma string a partir do teclado e calcule o
comprimento da string lida no ecrã. Crie uma função que receba uma string e devolva
o comprimento da string
*/

#define DIM 100

int comp(char *);


void main(){
    char nome[DIM];
    char *name;
    name = &nome[0];
    
    printf("Insira seu nome: ");
    gets(nome);

    printf("O seu nome é tem %d de comprimento.\n\n", comp(name));
}

int comp(char *s){
    int lenght = 0;
    for(int i = 0; i < DIM; i++){if(*(s+i) == '\0')return lenght; else lenght++;}
}

