#include <stdio.h>

void main(){
    int val;

    printf("Digite um valor inteiro: ");
    scanf("%d", &val);

    if(val % 3 == 0){
       printf("\n%d é divisível por 3.\n\n", val); 
    }
    else {
      printf("\n%d não é divisível por 3.\n\n", val); 
    }

}