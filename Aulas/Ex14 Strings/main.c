int main(int argc, char const *argv[])
{
    
  char s[10];

  printf("Digite Algo (Scanf Convencional): \n");
  scanf("%s",s);
  fflush(stdin);

  printf("Resultado: %s\n\n", s);
  
  
  
  printf("Digite Algo (Scanf Diferente):\n");
  scanf("%10[^\n]s",s);
  fflush(stdin);

  printf("Resultado: %s\n\n",s);





    return 0;
}
