#include <stdio.h>


void tabuada(int);


void main(){
    int n;

    do
    {
        printf("Digite o valor que pretende para a tabuada: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    tabuada(n);
}


void tabuada(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d  x  %d  = %d\n", n, i, n*i);
    }
}