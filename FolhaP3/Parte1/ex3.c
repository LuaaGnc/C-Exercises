#include <stdio.h>


void fibfnc(int);


void main(){
    int n;

    do
    {
        printf("Digite quantos números quer da Série de Fibonacci: ");
        scanf("%d", &n);
        fibfnc(n);
    } while (n < 1);
}

void fibfnc(int n){
    int fib0=0, fib1=1, fib2=1;

    for(int _ = 0; _ < n; _++){
        printf("%d ", fib2);
        fib2 = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib2;
    }
    printf("\n");
}