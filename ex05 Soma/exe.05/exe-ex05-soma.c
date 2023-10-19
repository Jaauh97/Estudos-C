#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int A , B, soma, sub, mult, divis;

printf("Digite Um Numero:\n");
scanf("%d",&A);

printf("Digite Outro Numero:\n");
scanf("%d",&B);

soma = A+B;
sub = A-B;
mult = A*B;
divis = A/B;

printf("Resultados:\n");
printf("Soma: %d\n", soma);
printf("Subtracao: %d\n", sub);
printf("Multiplicacao: %d\n", mult);
printf("Divisao: %d\n", divis);





	return 0;
}