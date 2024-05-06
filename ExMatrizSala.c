#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

int main()
{
    int matriz[N][N];
    float media;
    
    srand((unsigned int)time(NULL));
    
    for(int l = 0; l < N; l++)
    {
        for(int c = 0; c < N; c++)
        {
            matriz[l][c] = rand() % 10;
            printf("%d  ", matriz[l][c]);
        }
        printf("\n");
    }
    
    for(int l = 0; l < N; l++)
    {
        int somaL = 0;
        
        for(int c = 0; c < N; c++)
        {
            somaL += matriz[l][c];
        }
        
        printf("A soma total da linha %d é: %d\n", l, somaL);
    }
    
    printf("\n");
    
    for(int l = 0; l < N; l++)
    {
        int somaC = 0;
        
        for(int c = 0; c < N; c++)
        {
            somaC += matriz[c][l];
        }
        
        printf("A soma total da coluna %d é: %d\n", l, somaC);
    }
    
    printf("\n");
    
    int somaDP = 0;
    for(int l = 0; l < N; l++)
    {
        for(int c = 0; c < N; c++)
        {
            if(l == c)
            {
                somaDP += matriz[l][c];
            }
        }
    }
    
    media = somaDP/N;
    printf("A média da diagonal principal: %.2f\n", media);
    
    printf("\n");
    
    int maiorVal = 0;
    for(int l = 0; l < N; l++)
    {
        for(int c = 0; c < N; c++)
        {
            if(maiorVal < matriz[l][c])
            {
                maiorVal = matriz[l][c];
            }
        }
    }
    
    printf("O maior valor da matriz é: %d\n", maiorVal);
    
    printf("Os valores da diagonal secundária são: \n");
    for(int l = 0; l < N; l++)
    {
        for(int c = 0; c < N; c++)
        {
            if(l + c == N - 1)
            {
                printf("%d\n", matriz[l][c]);
            }
        }
    }
}


