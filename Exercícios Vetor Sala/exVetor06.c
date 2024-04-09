#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vetA [N]; 
    int vetB [N];
    
    srand(time(NULL));
    
    printf("Vetor A: \n");
    for(int i = 0; i < N; i++)
    {
        vetA[i]=rand()%51;
        printf("%d\n", vetA[i]);
    }
    
    printf("\n");
    
    printf("Vetor B: \n");
    for(int j = 0; j < N; j++)
    {
        vetB[j] = vetA[N - 1 - j];
        printf("%d\n", vetB[j]);
    }
}


