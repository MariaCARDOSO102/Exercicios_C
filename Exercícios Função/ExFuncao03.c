
#include <stdio.h>

void menu();
float percentual(int parc, int totalPessoa);

int main()
{
    char sexo, estadoCivil; 
    int totalSolteiro = 0, totalCasado = 0, totalDivorciado = 0;
    int totalF = 0, totalM = 0;
    int totalPessoa = 0;
    
    printf("Digite o sexo (F-feminino / M-masculino): ");
    scanf("%c", &sexo);
        
    while(sexo != 'X')
    {
        menu();
        
        printf("Digite o código referente ao estado civíl: ");
        scanf(" %c", &estadoCivil);
            
        switch(sexo)
        {
            case 'F':
                totalF++;
                break;
            case 'M':
                totalM++;
                break;
            default:
                break;
        }
        
        switch(estadoCivil)
        {
            case 'A':
                totalSolteiro++;
                break;
            case 'B':
                totalCasado++;
                break;
            case 'C':
                totalDivorciado++;
            default:
                break;
        }
             
            totalPessoa++;
            
            printf("Digite o sexo (F-feminino / M-masculino):");
            scanf(" %c", &sexo);   
    }
        
    printf("\n\n");
    
    printf("A distribuição da população por sexo é:\n Feminino: %d\n Masculino: %d\n", totalF, totalM);
    
    float percentualSolteiro = percentual(totalSolteiro, totalPessoa);
    float percentualDivorciado = percentual(totalDivorciado, totalPessoa);
    
    printf("O percentual de pessoas solteiras é: %g%%\n", percentualSolteiro);
    printf("A quantidade de pessoas casadas é: %d\n", totalCasado);
    printf("O percentual de pessoas divorciadas é: %g%%\n", percentualDivorciado);
}

void menu()
{
    printf("Estado civíl\tCódigo\n");
    printf("Solteiro(a)\tA\n");
    printf("Casado(a)\tB\n");
    printf("Divorciado(a)\tC\n");
}

float percentual(int parc, int totalPessoa)
{
    return (float)(parc * 100)/totalPessoa;
}