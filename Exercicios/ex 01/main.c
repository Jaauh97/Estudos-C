#include <stdio.h>
#include <stdlib.h>

void ex01()
{
	 int i;

    for (i=99; i>=50; i--)
    {
        printf("%d ", i);
    }
    
}



void ex02()
{
	int i , valor ;
		
	for(i = 0; i < 5; i++)
	{
		printf("Informe o Valor:");
		scanf("%d", &valor);
		printf("O quadrado desse numero e: %d.\n", valor*valor);

	}

}



void ex03()
{
	int i;
	for(i = 190; i >= 160; i--)
	{
		printf("%d ",i);
		
	}
}


void ex04(){
	
	int dia;
	printf("Informe o Dia Da Semana:");
	scanf("%d", &dia);
	
	
	switch(dia)
	{
		case 1:// domingo
			printf("Final de semana\n");
			break;
			
			case 2://segunda feira
				case 3://terca feira
					case 4://quarta feira
						case 5://quinta feira
							case 6://sexta feira
								printf("Dia De semana\n");
								break;
								default:
									printf("Dia Invalido\n");
									break;
						
			
	}
	
	int mes;
	
	printf("Agora Informe um Mes:");
	scanf("%d", &mes);
	
	switch(mes){
		
		case 1: //janeiro 
		case 2://fevereiro
		printf("Alta Temporada");
		break;
			case 3://marco
				case 4://abril
					case 5://maio
						printf("Baixa Temporada");
						break;
						case 6://junho
							case 7://julho
								printf("Alta Temporada");
								break;
									case 8://agosto
										case 9://setembro
											case 10://outubro
												case 11://novembro
												printf("Baixa Temporada");
												break;
												case 12://dezembro
													printf("Alta Temporada");
													break;
													
	}	
		
	
}

void ex05()
{
	int mes;
	
	printf("Digite O numero de um mes , e saiba quantos dias ele tem");
	scanf("%d", &mes);
	
	switch(mes){
		case 1: //janeiro
		printf("Janeiro - 30 Dias");
		break;
		
		case 2://fevereiro
		printf("Fevereiro - 28 Dias");
		break;
		
		case 3:
			printf("Marco - 31 Dias ");
			break;
		case 4:
		    printf("Abril- 30 dias");
		break;
		case 5:
		    printf("Maio - 30 dias");\
		break;
		case 6:
		     printf("Junho - 30 dias");
		break;
		case 7:
			printf("Julho - 30 dias");
			break;
		case 8:
		    printf("Agosto - 31 Dias");	
		    break;
		case 9:
		    printf("Setembro - 30 Dias");
			break;
		case 10:
		    printf("Outubro - 31 dias");
			break;
		case 11:
		printf("Novembro 30 dias");
		   break;
		case 12:
		   printf("Dezembro - 31 dias");
		   break;
		default:
		printf("Opacao Inavlida");
		break;      		    
			
		
	}
}
int main(int argc, char *argv[]) {
  
  
  //ex01();	
 //ex02();	
//ex03();
//ex04();
	
ex05();
	
	
	
	
	
	return 0;
}