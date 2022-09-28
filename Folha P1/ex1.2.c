#include <stdio.h>

void main() {
    int val1;
    float val2;

    scanf("%d%f", &val1, &val2);
    printf("\nProduto: %d x %.2f = %.2f\n\n", val1, val2, val1*val2);
}