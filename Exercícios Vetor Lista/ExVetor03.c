#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet [N]; 
    int maior = 0;
    int cont = 0;
    
    srand(time(NULL));
    
    for(int i = 0; i < N; i++)
    {
        vet[i]=rand()%11;
        printf("%d\n", vet[i]);
        
        if(vet[i] > vet[i - 1] && i > 0)
        {
            cont = 1;
        }
    }
    
    if(cont == 1)
    {
        printf("O vetor não está ordenado em forma crescente!");
    }
    else
    {
        printf("O vetor está ordenado em forma crescente!");
    }
    
}

