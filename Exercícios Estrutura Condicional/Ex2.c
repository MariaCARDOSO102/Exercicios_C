#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    system("clear");
    
    int a, b;
    
    printf("Digite um valor: ");     
    scanf("%d", &a);
    
    printf("Digite um valor: ");     
    scanf("%d", &b);
    
    if (a>b)
    {
        if(a%b == 0)
        {
            printf("São múltiplos!");
        }
        else 
        {
        printf("Não são múltiplos!");
        }
    }
    else 
    {
        printf("Não são múltiplos!");
    }
}