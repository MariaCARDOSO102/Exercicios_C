
#include <stdio.h>

float media(float soma, int totalPessoas);
float percentual(int total, int totalPessoas);

int main()
{
    int nivelSatis, somaNivel = 0, total;
    float tempResid, somaResid = 0, soma;
    int totalPessoas = 0, totalPessoasIns = 0, totalPessoa10 = 0;
    
    printf("Insira o nível de satisfação com a cidade de 1 a 10: ");
    scanf("%d", &nivelSatis);
    
    while(nivelSatis != -1)
    {
        printf("Insira o tempo de residência em anos: ");
        scanf("%f", &tempResid);
        
        somaNivel += nivelSatis;
        totalPessoas++;
        
        somaResid += tempResid;
        
        if(nivelSatis < 5)
        {
            totalPessoasIns++;
        }
        
        if(tempResid > 10)
        {
            totalPessoa10++;
        }
        
        
        printf("Insira o nível de satisfação com a cidade de 1 a 10 (-1 termina a operação): ");
        scanf("%d", &nivelSatis);
    }
    
    printf("\n");
    
    float resultMediaNivel = media(somaNivel, totalPessoas);
    printf("A média do nivel de satisfação da população é: %.1f\n", resultMediaNivel);
    
    float resultMediaResid = media(somaResid, totalPessoas);
    printf("A média do tempo de residência da população é: %.1f anos\n", resultMediaResid);
   
    float resulPercInsats = percentual(totalPessoasIns, totalPessoas);
    printf("O percentual de pessoas insatisfeitas com a cidade é: %g%%\n", resulPercInsats);
    
    float resulPercAcima10 = percentual(totalPessoa10, totalPessoas);
    printf("O percentual de pessoas que redidem na cidade há mais de 10 anos é: %g%%\n", resulPercAcima10);
   
}

float media(float soma, int totalPessoas)
{
    return soma / totalPessoas;
}

float percentual(int total, int totalPessoas)
{
    return (float)(total * 100)/ totalPessoas;
}