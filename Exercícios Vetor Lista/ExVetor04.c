#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet [N]; 
    int num, contnum = 0;
    
    printf("Digite um valor para ser verificado: ");
    scanf("%d", &num);
    
    srand(time(NULL));
    
    printf("\n");
    printf("Vetor: \n");
    for(int i = 0; i < N; i++)
    {
        vet[i]=rand()%51;
        printf("%d\n", vet[i]);
        
        if (vet[i] == num)
        {
            contnum++;
        }
    }
    
    printf("\n");
    
        if (contnum == 1)
        {
            printf("O número %d está preseente no vetor!", num);
        }
        else
        {
            printf("O número %d não está preseente no vetor!", num);
        }
}
