#include <stdio.h>
/*
7. Construa um algoritmo para determinar o maior, em valor absoluto, entre N
números reais, fornecidos um de cada vez pelo utilizador.
*/
void main() {
    int n;
    float num, maior=0;
    printf("Digite quantos números reais pretende inserir: ");
    scanf("%d", &n);

    printf("Digite os %d números reais abaixo.\n", n);
    for (int _ = 0; _ < n; _++)
    {
        scanf("%f", &num);
        (num < 0) ? num=-num: 0; // Se for negativo, passa para positivo
        (num >= maior) ? maior = num : 0;   // Se for  num >= maior guarda no maior
    }
    

    printf("O maior em valor absoluto da sequência é %f.\n\n", maior);
}