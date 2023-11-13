int main(int argc, char const *argv[])
{
    int v[5];
    int i;
    for (i=0; i<5;i++)
    {
        printf("Insira Um Dado:\n");
        scanf("%d", &v[i]);
    }
    
    printf("Dados Inseridos\n");
    
    for (i=0; i<5; i++)
    {
        printf("%d", v[i]);
    }
    
    return 0;
}
