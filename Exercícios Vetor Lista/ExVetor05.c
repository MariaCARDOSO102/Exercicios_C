#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet [N];
    
    srand(time(NULL));
    
    for(int i = 0; i < N; i++)
    {
        vet[i]=(rand()%10) - 5;
        
        if (vet[i] < 0)
        {
            vet[i] = 0;    
        }
        
        printf("%d\n", vet[i]);
    }
    
}



