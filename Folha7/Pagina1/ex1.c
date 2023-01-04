#include <stdio.h>


int main(){
    FILE  *ficheiro;
    char frase[100];
    ficheiro = fopen("ficheiro.txt", "w");

    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);

    fprintf(ficheiro,"%s", frase);
    fclose(ficheiro);
    return 0;
}