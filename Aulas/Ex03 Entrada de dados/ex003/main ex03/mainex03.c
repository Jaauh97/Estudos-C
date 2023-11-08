#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    int idade = 0;
    float peso = 0.0;

    printf("Valor inicial da idade: %d.\n", idade);
    printf("Valor inicial do peso: %d.\n", peso);
    
    printf("Digite uma idade:\n");
    scanf("%d" , &idade );
    printf("Digite um peso:\n");
    scanf("%f" , &peso );

    printf("Idade informada: %d.\n",idade);

    printf("Peso Informado: %f.\n", peso);

    return 0;
}