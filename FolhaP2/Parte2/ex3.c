#include <stdio.h>

void main(){
    int n;
    int a=0, b=1, fib=1;

    do{
    printf("Digite quantos números pretende da sequência de Fibonacci: ");
    scanf("%d", &n);
    }while(n < 1);

    for (int _ = 0; _ < n; _++){
        printf("%d ", fib);

        // Adiciona primeiro e segundo
        fib = a + b;
        // Primeiro obtém o valor do segundo
        a = b;
        // E o segundo o do terceiro
        b = fib;
        // Volta para cima e soma AGAIN
    }
}