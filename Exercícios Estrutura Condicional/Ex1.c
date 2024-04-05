#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    system("clear");
    
    float Val1, Val2, Val3;
    
    printf("Digite um valor: ");     
    scanf("%f", &Val1);
    
    printf("Digite um valor: ");     
    scanf("%f", &Val2);
    
    printf("Digite um valor: ");     
    scanf("%f", &Val3);
    
    if (Val1>Val2 && Val1>Val3)
    {
        printf("O valor maior é: %.2f\n", Val1);
    } 
    else if(Val2>Val1 && Val2>Val3){
        printf("O maior valor é: %.2f\n", Val2);
    }
    else {
        printf("O maior valor é: %.2f\n", Val3);
    }
    
}
