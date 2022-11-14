#include <stdio.h>


void maiorNumero(int);


void main(){
    int n;

    do
    {
        printf("Quantos números pretende? ");
        scanf("%d", &n);
    } while (n < 2);

    maiorNumero(n); 
}


void maiorNumero(int n){
    float num, M;
    
    for(int _ = 1; _ <= n; _++){
        printf("Digite um número real: ");
        scanf("%f", &num);

        if (_==0){M=num;}
        if(num > M){M = num;}
    }
    printf("O maior número da sequência é %f", M);
}
