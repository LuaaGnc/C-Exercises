#include <stdio.h>

int main() {
	double num, frac;
	
	printf("Digite um numero real: ");
	scanf("%lf", &num);
	frac = num - (int)num;
	
	printf("A parte inteira e %d e a fracionaria e %f\n\n", (int)num, frac);
	return 0;
}
