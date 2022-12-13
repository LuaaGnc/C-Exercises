#include <stdio.h>
#include <string.h>

/*
8. Escreva um programa em C que leia uma string e um carácter a partir do teclado e crie
uma função que receba a string e o caráter e devolva o número de ocorrências do
carácter na string.
*/

#define DIM 70

int contacaracteres(char *, char *);

int main(){
    char frase[DIM], caractere[1];
    char *fr, *c;
    fr = &frase[0];
    c = &caractere[0];

    printf("Insira a frase: ");
    fflush(stdin);
    gets(frase);
    
    printf("Insira o caráctere: ");
    fflush(stdin);
    caractere[0] = getc(stdin);

    printf("Existem %d caractéres '%c' na frase inserida.\n\n", contacaracteres(fr, c), caractere[0]);
    return 0;
}


int contacaracteres(char *fr, char *c){
    int contador = 0;
    for(int k = 0; k < strlen(fr); k++){
        if(*(fr+k) == *c){
            contador++;
        }
    }
    return contador;
}
