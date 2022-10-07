#include <stdio.h>

int main() {
    float valkg, valg;
    
    printf("Digite o valor em KG: ");
    scanf("%f", &valkg);

    valg = valkg*1000;
    printf("\n%.3f Kg ---->>> %.2f g\n\n", valkg, valg);
    
    return 0;
}