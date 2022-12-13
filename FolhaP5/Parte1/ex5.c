#include <stdio.h>
#include <string.h>

#define DIM 70

void main(){
    char frase[DIM];
    char *fr;
    fr = &frase[0];
    
    printf("Insira seu nome: ");
    gets(frase);

    printf("A frase invertida é ");
    invert(fr);
    printf("\n\n\n");
}


void invert(char *s){
    for(int k = strlen(s); k >= 0; k--)
        printf("%c", *(s+k));
}

