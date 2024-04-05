#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vetA [N]; 
    int vetB [N];
    int vetC [N];
    
    srand(time(NULL));
    
    printf("Vetor A: \n");
    for(int i = 0; i < N; i++)
    {
        vetA[i]=rand()%11;
        printf("%d\n", vetA[i]);
    }
    printf("\n");
    
    printf("Vetor B: \n");
    for(int j = 0; j < N; j++)
    {
        vetB[j]=rand()%11;
        printf("%d\n", vetB[j]);
    }
    printf("\n");
    
    printf("Vetor C: \n");
    for(int k = 0; k < N; k++)
    {
        vetC[k] = vetA[k] + vetB[k];
        printf("%d\n", vetC[k]);
    }
}





