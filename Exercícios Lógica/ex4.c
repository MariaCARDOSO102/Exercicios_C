#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main ()
{
  system ("clear");

  float NumReal, ParteFrac, NumArred;
  int ParteInt;

  printf ("Digite um número real: ");
  scanf ("%f", &NumReal);
  
  ParteInt = (int)NumReal;
  
  printf("O valor inteiro desse número é: %d\n", ParteInt);

  ParteFrac = modf(NumReal, &ParteFrac);
  
  printf("A parte fracionária desse número é: %.2f\n", ParteFrac);
  
  NumArred = round(NumReal);
  
  printf("Este número real arredondado para um número inteiro é: %.0f\n", NumArred);
}