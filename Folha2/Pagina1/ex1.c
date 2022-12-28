#include <stdio.h>
/*
1. Escreva uma instrução de atribuição para cada uma das seguintes ações:
    a) A variável I é incrementada de uma unidade
    b) M é uma cópia do valor de X.
    c) Q é o valor da divisão inteira dos inteiros I e J.
    d) X é o valor da divisão real dos inteiros I e J.
    e) U toma o valor do algarismo das unidades do real X.
    f) A variável inteira PAR vale 1 se N for par e 2 se N for ímpar.
*/
void main(){
    //a
    int a=0;
    a++;

    //b
    int m, x;
    m = x;

    //c
    int q, i, j;
    q = i/j;

    //d
    float h;
    int k, l;

    h = (float)k/l;

    //e
    int u;
    float x;

    u = x%10;

    //f
    int PAR, N;
    PAR = (N%2 == 0)? 1 : 2; 

}