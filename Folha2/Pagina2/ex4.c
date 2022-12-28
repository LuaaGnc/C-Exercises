#include <stdio.h>

int main(){
    int num;

    do{
        printf("Digite um número positivo: ");
        scanf("%d", &num);
    } while(num < 0);

    for (int i = 2; i < num-1; i++)
        if (num%i == 0){
            printf("O número não é primo!\n\n");
            return 0;
        }
    printf("O número %d é primo!\n\n", num);
    return 0;
}