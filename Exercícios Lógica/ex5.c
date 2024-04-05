#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main ()
{
  system ("clear");

  int NumInt;
  float Raiz;

  printf ("Digite um número inteiro: ");
  scanf ("%d", &NumInt);
  
  Raiz = sqrt(NumInt);
  
  printf("A raiz quadrada desse número é: %g\n", Raiz);
  
   printf("%d elvado ao quadrado é: %d\n", NumInt, NumInt * NumInt);

}