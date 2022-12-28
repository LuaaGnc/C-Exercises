#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero;

	printf("Digite um numero com 3 dígitos: ");
	scanf("%d", &numero);
	
    //                                           stdnumber  centenas(inteiro) restodecentenas&mudarunidade  restodecentenas&restounidade
    printf("--> O número %d é composto por %d Centenas, %d Dezenas e %d Unidades!\n\n", numero, numero/100, numero%100/10, numero%100%10);

	return 0;
}