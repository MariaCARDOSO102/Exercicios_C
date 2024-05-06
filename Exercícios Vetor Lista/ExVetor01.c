#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet [N]; 
    int contPar = 0;
    
    srand(time(NULL));
    
    for(int i = 0; i < N; i++)
    {
        vet[i]=rand()%51;
        printf("%d\n", vet[i]);
        
        if (vet[i] % 2 == 0)
        {
            contPar++;
        }
    }
    
    printf("A quantidade de números pares no vetor é: %d", contPar);
}

