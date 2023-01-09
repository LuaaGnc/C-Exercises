#include <stdio.h>
#include <string.h>

/*
 * 5. Escreva um programa em C que leia uma frase do teclado e a escreva num ficheiro
 * binário (ficheiro.dat).
 */

/*
 * 6. Escreva um programa em C que leia o conteúdo do ficheiro binário (ficheiro.dat, criado
 * na alínea anterior) e escreve o seu conteúdo no ecrã
 */


int main(){
    FILE *ficheiro;
    char frase[200], fraseLida[200];
    ficheiro = fopen("binfile.dat", "wb+");
    if (ficheiro == NULL) {
        printf("O ficheiro binfile.dat nao pode ser aberto!");
        return 1;
    }

    // 5)
    printf("Digite uma frase: ");
    gets(frase);
    fwrite(frase, sizeof(char),200,ficheiro);

    // 6)
    rewind(ficheiro);
    fread(fraseLida, sizeof(char),200,ficheiro);
    printf("\nA frase lida do arquivo binario e %s\n\n", fraseLida);
    fclose(ficheiro);
}