#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main()
{
    int matriz[N][N];
    int soma = 0;
    
    srand(time(NULL));
    
    for (int l = 0; l < N; l++) 
    {
        for (int c = 0; c < N; c++) 
        {
            matriz[l][c] = rand() % 51;
                
            soma += matriz[l][c];
        }
    }
    
    printf("A soma da matriz é: %d", soma);
    
}





