#include <stdio.h>
#include <string.h>

#define DIM 70

void main(){
    char frase[DIM];
    char *conta;
    conta = &frase[0];
    
    printf("Insira a frase: ");
    gets(frase);

    printf("O número de dígitos na frase inserida é %d\n\n", contadigitos(conta));
}


int contadigitos(char *s){
    int contador = 0;
    for(int k = 0; k < strlen(s); k++)
        if(*(s+k) >= '0' && *(s+k) <= '9')
            contador++;
    return contador;
}
