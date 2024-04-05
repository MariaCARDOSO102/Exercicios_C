#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet [N]; 
    int soma = 0;
    float media; 
    
    srand(time(NULL));
    
    for(int i = 0; i < N; i++)
    {
        vet[i]=rand()%51;
        printf("%d\n", vet[i]);
        
        soma += vet[i];
    }
    
    media = soma / N;
    
    printf("A média dos valores é: %.2f", media);
}


