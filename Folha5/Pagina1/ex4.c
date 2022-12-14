#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Escreva um programa em C que verifique se uma string é substring de outra. Por
// exemplo, “ver” é uma substring de “universo”.
#define DIM 50

int doTheThing(char *, char *);

void main(){
    char a[DIM], b[DIM];
    char *aa, *bb;
    aa = &a[0];
    bb = &b[0];

    printf("Se a primeira frase é substring da segunda.\n");
    printf("Primeira frase: ");
    gets(a);
    printf("Segunda frase: ");
    gets(b);

    (doTheThing(aa, bb) == 1) ? printf("a Primeira Frase É substring da Segunda Frase\n\n") : 
    printf("a Primeira Frase NÃO É substring da Segunda Frase\n\n");
}


int doTheThing(char *a, char *b){
    int tamanhoA = strlen(a), tamanhoB = strlen(b), check = 1, i_init;
   
    if(tamanhoA > tamanhoB)
        return 0;

    // Percorrer a string B e se encontrar uma letra igual, verifica as que tá a seguir...
    // Se isso for diferente da string A, não é substring naquele excerto.
    for(int i = 0; i < DIM; i++){
        i_init = i;
        if(*(b + i_init) == *a){
            for(int k = 1; k < tamanhoA; k++){
                printf("k = %d", k);
                if(*(b+i_init+1) == *(a+k)){
                    check++;
                    i_init++;
                }
                if(tamanhoA == check) return 1;
            }
        }
    }
    return (check == tamanhoA) ? 1 : 0;
}