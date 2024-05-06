#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet1 [N]; 
    int vet2 [N];
    float soma = 0, mult = 0;
    
    srand(time(NULL));
    
    printf("Vetor 1: \n");
    for(int i = 0; i < N; i++)
    {
        vet1[i]=rand()%11;
        printf("%d\n", vet1[i]);
    }
    printf("\n");
    
    printf("Vetor 2: \n");
    for(int j = 0; j < N; j++)
    {
        vet2[j]=rand()%11;
        printf("%d\n", vet2[j]);
    }
    printf("\n");
    
    for(int k = 0; k < N; k++)
    {
        mult = vet1[k] * vet2[k];
        soma += mult;
    }
    
    printf("O produto escalar entre o vetor 1 e o vetor 2 é: %.2f", soma);
}
