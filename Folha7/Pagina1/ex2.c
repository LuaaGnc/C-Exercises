#include <stdio.h>


int main(){
    FILE  *ficheiro;
    char frase[100];
    ficheiro = fopen("ficheiro.txt", "r");


    fflush(stdin);
    fscanf(ficheiro,"%s",  &frase);
    printf("A frase do ficheiro e %s", frase);
    fclose(ficheiro);
    return 0;
}