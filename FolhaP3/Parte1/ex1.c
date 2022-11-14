#include <stdio.h>

void parOuImpar(int);

void main(){
    int num;

    do{
        printf("Digite um número inteiro maior que 0: ");
        scanf("%d", &num);
    }while (num <= 0);
    parOuImpar(num);
}


void parOuImpar(int num){
    int call=0;
    for (int i = 2; i < num-1; i++)
    {
        if(num%i==0){
            printf("O número não é primo");
            call=1;
            break;
        }
    }
    if(call==0){printf("O número é primo");}
}
