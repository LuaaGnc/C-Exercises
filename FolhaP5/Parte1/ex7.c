#include <stdio.h>
#include <string.h>

#define DIM 70


/*
7. Escreva um programa em C que leia uma string a partir do teclado e verifique se a string
é capicua ou não. Crie uma função que receba a string e devolva 1 se a string é capicua
e 0 se não é.
*/

int capicua(char *);

void main(){
    char frase[DIM];
    char *fr;
    fr = &frase[0];
    
    printf("Insira a frase: ");
    gets(frase);

    (capicua(fr) == 1) ? printf("É capicua!") : printf("NÃO É capicua!");
}


int capicua(char *s){
    for(int k = 0; k < strlen(s); k++)
        if(*(s+k) != *(s+strlen(s)-1-k))
            return 0;
    return 1;
}