
int main(int argc, char const *argv[])
{
    float x=0,y=0, resultado=0;
    int op=0;


    do
    {
       
       printf("\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO\n\t");
       scanf("%i",&op);

       printf("Digite um Numero:\n");
       scanf("%f", &x);
       
       printf("Digite O Segundo Numero\n");
       scanf("%f", &y);
       switch (op)
       {
        case 1:
       resultado = x+y;
        break;
       
        case 2 :
        resultado = x-y;
        break;
        
        case 3:
        resultado = x*y;
        break;
       
        case 4:
        resultado = x/y;
        break;
        
        default:
        printf("Digite Uma Opacao Valida");
        break;
       
       }

       printf("O Resultado e: %.2f\n", resultado);

       printf("Digite 1 Para Continuar.\n");
       scanf("%i", &op);

    } while (op == 1);
    



    return 0;
}
