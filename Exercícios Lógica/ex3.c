#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main ()
{
  system ("clear");

  float deposito, taxajuros, valrend, valtotal;

  printf ("Digite o valor do depósito: ");
  scanf ("%f", &deposito);
  
  printf ("Digite a taxa de juros: ");
  scanf ("%f", &taxajuros);
  
  valrend = deposito * (taxajuros / 100);
  
  valtotal = deposito + valrend;
  
  printf("O valor do rendimento é: %.2f\n", valrend);
  printf("O valor total é: %.2f\n\n", valtotal);

}
