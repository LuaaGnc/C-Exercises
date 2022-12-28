#include <stdio.h>
#include <string.h>

/*
 * 9. Escreva um programa em C que leia uma string e um carácter a partir do teclado e crie
 * uma função que receba a string e o caráter e devolva a string alterada, ou seja, com
 * todas as ocorrências do carácter na string removidas.
*/

#define DIM 70

char *remover(char [], char []);

int main(){
    char frase[DIM], s[1];

    printf("Insira uma string.");
    gets(frase);

    printf("\nInsira um caracter.");
    fflush(stdin);
    s[0] = getc(stdin);

    remover(frase, s);
    printf("A sua nova frase removendo o caracter '%c' é:\n", s[0]);
    for(int i = 0; i < strlen(frase); i++)
        printf("%c", frase[i]);

    return 0;
}

char *remover(char frase[], char s[]){
    for(int i = 0; i < strlen(frase); i++)
        if(frase[i] == s[0])
            for(int k = i; k < strlen(frase); k++)
                frase[k] = frase[k+1];

    return (&frase[0]);
}
