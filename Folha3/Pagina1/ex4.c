#include <stdio.h>


int isPrime(int);


void main(){
    int n, value;

    do
    {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &n);
    } while (n<= 0);

    value = isPrime(n);

    (value == 0) ? printf("O número não é primo!\n\n") : printf("O número é primo!\n\n");
    
}


int isPrime(int n){
    for(int k=2; k < n - 1; k++){
        if(n%k == 0){return 0;}
    }
    return 1;
}