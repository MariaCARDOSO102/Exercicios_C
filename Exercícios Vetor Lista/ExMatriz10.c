#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main()
{
    int matriz[N][N];
    int somaDS = 0, soma = 0;
    
    srand(time(NULL));
    
    for (int l = 0; l < N; l++) 
    {
        for (int c = 0; c < N; c++) 
        {
            matriz[l][c] = rand() % 2;
            printf("%d ", matriz[l][c]);
            
            if (l == c)
                {
                    somaDS += matriz[l][c];
                }
                
            soma += matriz[l][c];
        }
        
        printf("\n");
    }
    
        if(soma == 3 && somaDS == 3)
        {
            printf("É uma matriz identidade!");
        }
        else 
        {
            printf("Não é uma matriz identidade!");
        }
}








