#include <stdio.h>

int main() {
	int num1, num2, resto;
	
	printf("Introduza dois numeros inteiros\n");
	scanf("%d%d", &num1, &num2);
	
	if(num1 > num2){
		resto = num1%num2;
	}
	else{
		resto = num2%num1;
	}
	
	printf("O resto da divisão do maior pelo menor número é %d\n\n", resto);
	
	return 0;
}
