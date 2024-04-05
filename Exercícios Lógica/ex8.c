#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main ()
{
  system ("clear");

  float raio, area;
  const float pi = 3.14159;

  printf ("Digite o raio do circulo: ");
  scanf ("%f", &raio);
  
  area = pi * pow(raio, 2);
  
  printf("A área do circulo é: %.2f\n", area);
  
}