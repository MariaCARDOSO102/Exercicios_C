#include <stdio.h>

void menu();
float media(float somaRenda, int quantPessoa);
float percentualDesempregado(int totalDesempregado, int quantPessoa);
float percentualRenda5000(int totalRenda5000, int quantPessoa);

int main()
{
    int profissao, quantPessoa = 0;
    float renda, somaRenda = 0, somaContador = 0, somaMedico = 0; 
    char opcao;
    int totalContador = 0, totalMedico = 0, totalDesempregado = 0;
    int totalRenda5000 = 0;
    
    printf("Digite a renda: ");
    scanf("%f", &renda);
    scanf("%c", &opcao);
    
    while(opcao != 'x')
    {
        menu();
        printf("Digite o código referente a profissão: ");
        scanf("%d", &profissao);
        
        somaRenda += renda;
        quantPessoa++;
        
        switch(profissao)
        {
            case 1:
                totalContador++;
                somaContador += renda;
                break;
            case 2:
                totalMedico++;
                somaMedico += renda;
                break;
            case 3:
                totalDesempregado++;
                break;
            default:
                break;
        }
        
        if(renda > 5000)
        {
            totalRenda5000++;
        }
        
        printf("Digite a renda: ");
        scanf("%f", &renda);
        scanf("%c", &opcao);
    }
    
    printf("\n\n");
    
    float resultMediaRenda = media(somaRenda, quantPessoa);
    printf("A média da renda mensal da população é: %.2f\n", resultMediaRenda);
    
    float resultMediaContador = media(somaContador, quantPessoa);
    float resultMediaMedico = media(somaMedico, quantPessoa);
    
    if(resultMediaContador > resultMediaMedico)
    {
        printf("Contador possui a maior média!\n");
    }
    else
    {
        printf("Médico possui a maior média!\n");
    }
    
    float resultPercentualDes = percentualDesempregado(totalDesempregado, quantPessoa);
    printf("O percentual de pessoas desempregradas é: %g%%\n", resultPercentualDes);
    
    float resultPercentualRenda = percentualRenda5000(totalRenda5000, quantPessoa);
    printf("O percentual de pessoas que possuem a renda acima de 5000,00 é: %g%%\n", resultPercentualRenda);
}

void menu()
{
    printf("Profissão\tCódigo\n");
    printf("Contador\t1\n");
    printf("Médico  \t2\n");
    printf("Desempregado\t3\n");
}

float media(float soma, int quantPessoa)
{
    return soma/quantPessoa; 
}

float percentualDesempregado(int totalDesempregado, int quantPessoa)
{
    return (float)(totalDesempregado * 100)/ quantPessoa;
}

float percentualRenda5000(int totalRenda5000, int quantPessoa)
{
    return (float)(totalRenda5000 * 100)/ quantPessoa;
}