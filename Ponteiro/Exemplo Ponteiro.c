#include <stdio.h>

int main()
{
    int *pvalor;
    int valor = 10;
    
    pvalor = &valor;
    
    printf("Endereço = %p\n", &valor);
    printf("Endereço = %p\n", pvalor);
    printf("Valor = %d\n", valor);
    printf("Valor = %d\n", *pvalor);
}
