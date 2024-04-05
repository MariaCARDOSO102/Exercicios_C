#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    system("clear");
    
    int Idade;
    
    printf("Digite sua idade: ");     
    scanf("%d", &Idade);
    
    if (Idade >= 5 && Idade <= 7)
    {
        printf("Sua categoria é a Infantil A!");
    }
    else if (Idade >= 8 && Idade <= 10)
    {
        printf("Sua categoria é a Infantil B!");
    }
    else if (Idade >= 11 && Idade <= 13)
    {
        printf("Sua categoria é a juvenil A!");
    }
    else if (Idade >= 14 && Idade <= 17)
    {
        printf("Sua categoria é a juvenil B!");
    }
    else 
    {
        printf("Sua categoria é adulto!");
    }
}