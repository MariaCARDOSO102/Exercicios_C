#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

int main()
{
    int matriz[N][N], soma;
    float media;
    
    srand((unsigned int)time(NULL));
    
    for(int l = 0; l < N; l++)
    {
        soma = 0;
        for(int c = 0; c < N; c++)
        {
            matriz[l][c] = rand() % 10;
            soma += matriz[l][c];
            printf("%d  ", matriz[l][c]);
        }
        
        media += matriz[l][l];
        printf("= %d\n", soma);
    }
    
    printf("-----------------\n");
    
    int maiorVal = matriz[0][0];
    for(int l = 0; l < N; l++)
    {
        soma = 0;
        
        for(int c = 0; c < N; c++)
        {
            soma += matriz[c][l];
            if(maiorVal < matriz[l][c])
            {
                maiorVal = matriz[l][c];
            }
        }
        
        printf("%d ", soma);
    }
    
    printf("\n\n");
    
    printf("A média da diagonal principal: %.2f\n", media/N);
    
    printf("\n");
    
    printf("O maior valor da matriz é: %d\n", maiorVal);
    
    printf("\n");
    
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




