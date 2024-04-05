#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet [N]; 
    int maior = 0, menor = 100;
    
    srand(time(NULL));
    
    for(int i = 0; i < N; i++)
    {
        vet[i]=rand()%51;
        printf("%d\n", vet[i]);
        
        if(vet[i] > maior)
        {
            maior = vet[i];
        }
        if(vet[i] < menor)
        {
            menor = vet[i];
        }
    }
    
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d", menor);
}



