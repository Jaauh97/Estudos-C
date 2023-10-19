#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int dado = 10;
printf("Dado antes de receber incremento: %d.\n", dado);

dado++;
printf("Depois do recebimento: %d.\n", dado);

dado--;
printf("Depois do decremento: %d.\n", dado);

dado+= 3;
printf("Depois do incremento em 3 unidades: %d.\n", dado);

dado-= 2;
printf("Depois do decremento de 2 unidades: %d.\n", dado);

dado *= 10;
printf("Depois de Multplicar por 10: %d.\n", dado);



	
	

	
	return 0;
}