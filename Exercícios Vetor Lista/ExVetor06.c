#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet [N]; 
    int vetI [N];
    int cont = 0;
    
    srand(time(NULL));
    
    for(int i = 0; i < N; i++)
    {
        vet[i] = rand() % 51;        
    }
    
    for(int i = 0; i < N; i++)
    {
        vetI[i] = vet[N - 1 - i];
        printf("%d - %d\n", vet[i], vetI[i]);
    }
    
    printf("\n");
    
    for(int v = 0; v < N; v++)
    {
        if(vet[v] == vetI[v])
        {
            cont++;
        }
    }
    
    if(cont == N)
    {
        printf("O vetor é simétrico!");
    }
    else 
    {
        printf("O vetor não é simétrico!");
    }
}






