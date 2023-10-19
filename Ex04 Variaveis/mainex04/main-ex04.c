#include <stdio.h>
#include <stdlib.h>


#define texto "Entrada e Saida de Dados."


int main(int argc, char *argv[]) {
	
	printf("%s\n",texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	printf("Digite Seu Nome:\n");
	scanf("%s", nome);
	
	printf("Daddos Informados: \n");
	printf("Idade: %d.\n", idade);
	printf("Altura: %.2f.\n", altura);
	printf("nome: %s,\n", nome);
	
	
	
	return 0;
}