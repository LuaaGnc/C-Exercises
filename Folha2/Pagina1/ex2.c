#include <stdio.h>
#include <math.h>

/*
2. Escreva uma instrução de atribuição para cada uma das seguintes ações:
    a) A variável L é verdadeira se e só se L1 e L2 forem ambas falsas.
    b) A variável VALOR é verdadeira se e só se X é maior que Y.
    c) A variável L é verdadeira se e só se L1 é verdadeira, mas não L2.
    d) BOOL é verdadeira se e só se os inteiros I e J forem iguais em valor absoluto.
    e) LOGIC é verdadeira se e só se M for o dobro de N.
    f) BISSEXTO é verdadeira se e só se a variável inteira ANO for divisível por 4 mas
    não por 100 ou então for divisível por 400.
    g) CONSOANTE é verdadeira se e só se a variável carácter LETRA for uma consoante
    minúscula.
    h) VOGAL é verdadeira se e só se a variável carácter CAR for uma vogal.
*/

typedef enum{FALSE, TRUE} boolean;

void main(){
    //a) False=0, True = 1
    boolean L, L1, L2;
    L == (L1 == FALSE && L2==FALSE) ? TRUE : FALSE;

    //b)
    boolean VALOR;
    int x, y;
    VALOR == (x > y) ? TRUE : FALSE;

    //c)
    boolean L, L1, L2;
    L == (L1 == TRUE && L2 != TRUE)? TRUE : FALSE;

    //d)
    boolean BOOL; 
    int i, j;

    if (i < 0){
        i = -i;
    }
    if (j < 0){
        j = -j;
    }
    
    BOOL == (i = j) ? TRUE : FALSE;

    //e)
    int m, n;
    boolean logic;

    logic == (m == 2*n) ? TRUE : FALSE;

    //f)
    boolean bissexto;
    int ano;

    bissexto == (ano%4 == 0 && ano%100 != 0 || ano%400==0) ? TRUE : FALSE;

    //g) Pegar nos valores ASCII

    //h) Pegar nos valores ASCII
}