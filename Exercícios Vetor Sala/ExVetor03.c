#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet [N]; 
    int tabuada;
    
    srand(time(NULL));
    
    for(int i = 0; i < N; i++)
    {
        vet[i]=rand()%11;
        printf("\n");
        printf("%d\n", vet[i]);
        
        for(int j = 1; j < 11; j++)
        {
            tabuada = vet[i] * j;
            printf("%d X %d = %d\n", vet[i], j, tabuada);
        }
        
    }
}




