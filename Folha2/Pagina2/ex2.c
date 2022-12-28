#include <stdio.h>

void main() {
    int n;
    float num, soma=0, media;
    
    do{
    printf("Digite quantos números reais pretende digitar: ");
    scanf("%d", &n);
    } while(n <= 2);
    
    for (int i = 0; i < n; i++)
    {
        printf("Digite o nº%d:", i+1);
        scanf("%f", &num);
        soma += num;

    }
    media = soma/n;
    printf("A média dos %d valores introduzidos é %.4f\n\n", n, media);

}