#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main ()
{
  system ("clear");

  float basemaior, basemenor, altura, area;

  printf ("Digite o comprimento da base maior do trapézio: ");
  scanf ("%f", &basemaior);
  
  printf ("Digite o comprimento da base menor do trapézio: ");
  scanf ("%f", &basemenor);
  
  printf ("Digite a altura do trapézio: ");
  scanf ("%f", &altura);
  
  area = ((basemaior + basemenor) * altura) / 2;
  
  printf("A área de um trapézio é: %.2f\n", area);
  
}