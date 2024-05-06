#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int vet [N]; 
    int aux;
    
    printf("Digite 10 valores: \n");
    
    for(int i = 0; i < N; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    
    for(int j = 0; j < N; j++)
    {
        for(int i = 0; i < N - 1; i++)
        {
            if(vet[i] > vet[i + 1])
            {
                aux = vet[i + 1];
                vet[i + 1] = vet[i];
                vet[i] = aux;
            }
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        printf("%d\n", vet[i]);
    }
}

