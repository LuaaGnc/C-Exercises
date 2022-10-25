#include <stdio.h>

void  main(){
    int n, i=0, j=0;
    printf("Digite um valor natural para n: ");
    scanf("%d", &n);
    while(i < n) {
        i += 1;
        j += i;
    }
    printf("A soma dos primeiros %d valores naturais é %d\n", n, j);
}
