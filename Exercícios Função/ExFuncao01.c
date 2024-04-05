#include <stdio.h>

float mediaIdade(int somaIdade, int totalPessoas);
float mediaAltrura(float somaAltura, int totalPessoas);
float percentual(int totalPessoas, int totalPessoas2);

int main()
{
    int idade, somaIdade = 0, totalPessoas = 0, somaAltura = 0, totalPessoas2 = 0;
    int maioridade = 0;
    float altura;
    
    do{
        printf("Digite a idade:");
        scanf("%d", &idade);
        
        if(idade > -1){
            printf("Digite a altura:");
            scanf("%f", &altura);
        
            somaIdade += idade;
            totalPessoas++;
            
            somaAltura += altura;
            
            if(maioridade < idade)
            {
                maioridade = idade;
            }
            
            if(altura > 1.80){
                totalPessoas2++;
            }
            
        }
        else
        {
            printf("Idade invalida! \n");
        }
    }while(idade > 0);
    
    float totalMediaIdade = mediaIdade(somaIdade, totalPessoas);
    printf("A média das idades é: %g\n", totalMediaIdade);
    
    float totalMediaAltura = mediaAltrura(somaAltura, totalPessoas); 
    printf("A média das alturas é: %.2f\n", totalMediaAltura);
    printf("A maior idade é: %d\n", maioridade);
    
    float totalPessoasAlt = percentual(totalPessoas, totalPessoas2); 
    printf("O percentual de pessoas que tem a altura maior que 1.80 é: %.2f%%\n", totalPessoasAlt);
   
}

float mediaIdade(int somaIdade, int totalPessoas)
{
    return (float)somaIdade/totalPessoas;
}

float mediaAltrura(float somaAltura, int totalPessoas)
{
    return somaAltura/totalPessoas;
}

float percentual(int totalPessoas, int totalPessoas2) {
    return (totalPessoas2 * 100)/totalPessoas;
}
