#include <stdio.h>

void main(){
    int a, b, i;

    printf("Digite dois valores naturais: ");
    scanf("%d%d", &a, &b);

    i = a + 1;
    while (i > a && i < b){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i += 1;
    }
}