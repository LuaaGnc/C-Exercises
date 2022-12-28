#include <stdio.h>
#include <ctype.h>

#define DIM 100

/*
 3. Escreva um programa em C que, dada uma string, teste se cada carácter é uma letra e,
em caso afirmativo, converta a letra na sua maiúscula. Por exemplo, "O mote e o
poeta são 2 faces da mesma moeda" é convertida em "O MOTE E O POETA SÃO 2
FACES DA MESMA MOEDA".
*/

void conversor(char []);

void conversor(char []);

void main(){
    char frase[DIM];
    
    
    printf("Insira seu nome: ");
    gets(frase);

    conversor(frase);
}

void conversor(char frase[]){

    for(int i = 0; i < DIM; i++)
        if(frase[i] >= 'a' && frase[i] <= 'z')
            frase[i] = toupper(frase[i]);

    printf("A frase inserida foi convertida para: %s \n\n", frase);
}