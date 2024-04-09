#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vetA [N]; 
    int vetB [N];
    int vetC [2 * N];
    
    srand(time(NULL));
    
    printf("Vetor A e B: \n");
    for(int i = 0; i < N; i++)
    {
        vetA[i]=rand()%51;
        vetB[i]=rand()%51;
        printf("%d - %d\n", vetA[i], vetB[i]);
    }
    
    printf("\n");
    
    printf("Vetor C: \n");
    for(int i = 0; i < N; i++)
    {
        vetC[i] = vetA[i];
        vetC[N + i] = vetB[i];
    }
    
    for(int i = 0; i < 2 * N; i++)
    {
        printf("%d\n", vetC[i]);
    }
    
}
