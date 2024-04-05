#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main ()
{
  system ("clear");

  float salariofunc, valImpRend;

  printf ("Digite o valor de seu salário: ");
  scanf ("%f", &salariofunc);
  
  valImpRend = salariofunc * 0.05;
  
  printf("O valor do imposto de renda a ser pago é: %.2f\n", valImpRend);
  
}