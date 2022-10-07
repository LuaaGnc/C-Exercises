#include <stdio.h>

int main() {
    int tempoOrigSegundos;
    int segundos, minutos, horas;
    
    printf("Introduza um valor inteiro de segundos: ");
    scanf("%d", &tempoOrigSegundos);

    // Como são inteiros, dividem-se e fica inteiro
    horas = tempoOrigSegundos / 3600;
    // Pega no resto(minutos mas em unidade de horas) e passa para unidade de minutos
    minutos = (tempoOrigSegundos%3600)/60;
    segundos = tempoOrigSegundos%3600%60;

    printf("\n\nAs horas no formato HH:MM:SS é: ");
	printf("\n\t%d horas, %d minutos e %d segundos.\n\n\n", horas, minutos, segundos);
	
    return 0;

}