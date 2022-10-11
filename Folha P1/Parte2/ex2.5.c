#include <stdio.h>
#include <math.h>

void main(){
    double x;

    printf("Digite um valor real para X: ");
    scanf("%lf", &x);

    x = (x > 0) ? exp(x)/x : exp(-x);
    printf("O valor é %.5lf\n\n", x);
}